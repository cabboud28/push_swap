
#include "ft_printf.h"

int	ft_putstr_len(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
	{
		write (fd, "(null)", 6);
		return (6);
	}
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	return (i);
}
