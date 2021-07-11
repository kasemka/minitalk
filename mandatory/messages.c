#include "minitalk.h"

void	msg_malloc_fail(void)
{
	write(2, "malloc fail\n", 12);
	exit(EXIT_FAILURE);
}
