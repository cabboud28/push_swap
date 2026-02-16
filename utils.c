

#include "push_swap.h"

void	ft_strjoin_sep(char **s1, char *s2, char *sep)
{
	char	*temp;

	if (!s1 || !s2 || !sep)
		return ;
	if (!*s1)
	{
		*s1 = ft_strdup(s2);
		return ;
	}
	temp = *s1;
	*s1 = ft_strjoin(*s1, sep);
	if (!*s1)
	{
		*s1 = temp;
		return ;
	}
	free(temp);
	temp = *s1;
	*s1 = ft_strjoin(*s1, s2);
	if (!*s1)
	{
		*s1 = temp;
		return ;
	}
	free(temp);
}

int	comp_flag(const char *s)
{
	return (ft_streq(s, "--simple")
		|| ft_streq(s, "--medium")
		|| ft_streq(s, "--complex")
		|| ft_streq(s, "--adaptive"));
}

int	ft_streq(const char *s, const char *lit)
{
	if (!s || !lit)
		return (0);
	if (ft_strlen(s) != ft_strlen(lit))
		return (0);
	return (ft_strncmp(s, lit, ft_strlen(lit)) == 0);
}

long	ft_atoi_overflow(const char *str, int *overflow)
{
	int		i;
	int		sign;
	long	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		nb = nb * 10 + (str[i] - '0');
		if ((sign == 1 && nb > INT_MAX) 
			|| (sign == -1 && (nb * -1) < INT_MIN))
			return (*overflow = 1, 0);
		i++;
	}
	return (nb * sign);
}

void	free_array(char **n)
{
	int	i;

	i = 0;
	if (!n)
		return ;
	while (n[i])
	{
		free (n[i]);
		i++;
	}
	free (n);
}
