/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabboud <cabboud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 08:40:04 by cabboud           #+#    #+#             */
/*   Updated: 2026/02/16 08:40:04 by cabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_len(void *ptr, int fd)
{
	unsigned long long	address;
	int					count;

	if (!ptr)
	{
		write (fd, "(nil)", 5);
		return (5);
	}
	address = (unsigned long long)ptr;
	count = 0;
	count += ft_putstr_len("0x", fd);
	count += ft_putnbr_base_len(address, "0123456789abcdef", fd);
	return (count);
}
