#include "minitalk.h"

void	send_signal_int(int pid, unsigned int len)
{
	unsigned int	counter;

	counter = 2147483648;
	while (counter > 0)
	{
		if (len & counter)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		counter /= 2;
		usleep(40);
	}
}

void	send_signal(int pid, char c)
{
	int	counter;

	counter = 128;
	while (counter > 0)
	{
		if (c & counter)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		counter /= 2;
		usleep(40);
	}
}

int	main(int argc, char **argv)
{
	char				*string;
	int					pid;
	unsigned int		len_s;

	if (argc != 3)
		return (0);
	pid = ft_atoi(*(argv + 1));
	string = *(argv + 2);
	len_s = ft_strlen(string);
	send_signal_int(pid, len_s);
	usleep(40);
	while (*string != 0)
	{
		send_signal(pid, *string);
		string++;
	}
	return (0);
}
