/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_len.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabboud <cabboud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 08:39:49 by cabboud           #+#    #+#             */
/*   Updated: 2026/02/16 08:39:49 by cabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_len(unsigned long long n, char *base, int fd)
{
	int		count;
	char	digit;
	int		b;

	count = 0;
	b = 0;
	while (base[b])
		b++;
	if (n >= (unsigned long long)b)
		count += ft_putnbr_base_len(n / b, base, fd);
	digit = base[n % b];
	write (fd, &digit, 1);
	return (count + 1);
}
