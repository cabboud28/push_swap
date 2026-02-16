/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabboud <cabboud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 08:39:58 by cabboud           #+#    #+#             */
/*   Updated: 2026/02/16 08:39:58 by cabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_len(int n, int fd)
{
	int long	nn;
	int			i;

	nn = n;
	i = 0;
	if (nn < 0)
	{
		write (fd, "-", 1);
		nn *= -1;
		i = 1;
	}
	return (ft_putnbr_base_len((unsigned long long)nn, "0123456789", fd) + i);
}
