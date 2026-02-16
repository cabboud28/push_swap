

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(int fd, const char *s, ...);
int		ft_putnbr_base_len(unsigned long long n, char *base, int fd);
int		ft_putchar_len(char c, int fd);
int		ft_putstr_len(char *s, int fd);
int		ft_putnbr_len(int n, int fd);
int		ft_putptr_len(void *p, int fd);
int		ft_putfloat_len(double f, int fd);

#endif