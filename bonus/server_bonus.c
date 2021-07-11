#include "minitalk_bonus.h"

t_string	g_string;

void	string_malloc(int len_s)
{
	g_string.str = malloc(sizeof(char) * len_s);
	if (g_string.str == NULL)
		msg_malloc_fail();
	g_string.str[len_s] = '\0';
	g_string.len = len_s;
}

void	string_record( int signal, siginfo_t *siginfo)
{
	static char		c = 0;
	static int		counter_char = 128;

	if (counter_char > 0)
	{
		if (signal == SIGUSR1)
			c = c + counter_char;
		counter_char = counter_char / 2;
	}
	if (counter_char == 0 && g_string.index < g_string.len)
	{
		g_string.str[g_string.index] = c;
		counter_char = 128;
		c = 0;
		g_string.index++;
	}
	if (g_string.index == g_string.len)
	{
		write(1, g_string.str, g_string.len);
		usleep(10);
		kill(siginfo->si_pid, SIGUSR1);
		free(g_string.str);
		g_string.str = NULL;
	}
}

void	action(int signal, siginfo_t *siginfo, void *code)
{
	static unsigned int		len_s = 0;
	static unsigned int		counter_len = 2147483648;

	(void)code;
	if (len_s == 0)
		g_string.index = -1;
	if (counter_len > 0)
	{
		if (signal == SIGUSR1)
			len_s = len_s + counter_len;
		counter_len = counter_len / 2;
	}
	if (counter_len == 0 && g_string.index == -1)
		string_malloc(len_s);
	if (g_string.index >= 0)
		string_record(signal, siginfo);
	if (counter_len == 0 && g_string.index == -1)
		g_string.index++;
	if (g_string.index == g_string.len)
	{
		counter_len = 2147483648;
		len_s = 0;
		g_string.len = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;

	sigemptyset(&sa.sa_mask);
	sigaddset(&sa.sa_mask, SIGUSR1);
	sigaddset(&sa.sa_mask, SIGUSR2);
	sa.sa_flags = SIGINFO;
	sa.sa_sigaction = &action;
	write(1, "Process ID of this program is ", 30);
	ft_putnbr_fd(getpid(), 1);
	write(1, "\n", 1);
	while (1)
	{
		sigaction(SIGUSR1, &sa, NULL);
		sigaction(SIGUSR2, &sa, NULL);
	}
}
