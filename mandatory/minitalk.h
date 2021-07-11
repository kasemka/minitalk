#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <signal.h>
# include <stdlib.h>

typedef struct s_string{
	int		len;
	int		index;
	char	*str;
}				t_string;

void	ft_putnbr_fd(int n, int fd);
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *s);
void	msg_malloc_fail(void);

#endif