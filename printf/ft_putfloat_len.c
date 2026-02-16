/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat_len.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabboud <cabboud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 08:39:44 by cabboud           #+#    #+#             */
/*   Updated: 2026/02/16 08:39:44 by cabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putfloat_len(double f, int fd)
{
	long	nb;
	int		count;

	count = 0;
	if (f < 0)
	{
		count += ft_putchar_len('-', fd);
		f = -f;
	}
	nb = (long)(f * 100);
	if (nb >= 100)
		count += ft_putnbr_base_len(nb / 100, "0123456789", fd);
	else
		count += ft_putchar_len('0', fd);
	count += ft_putchar_len('.', fd);
	if (nb % 100 < 10)
		count += ft_putchar_len('0', fd);
	count += ft_putnbr_base_len(nb % 100, "0123456789", fd);
	return (count);
}
