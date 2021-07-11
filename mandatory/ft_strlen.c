#include "minitalk.h"

size_t	ft_strlen(const char *s)
{
	const char	*ps;

	ps = s;
	while (*ps != '\0')
		ps++;
	return (ps - s);
}
