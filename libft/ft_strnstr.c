/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabboud <cabboud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 08:38:41 by cabboud           #+#    #+#             */
/*   Updated: 2026/02/16 08:38:41 by cabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return ((char *) str);
	while (str[i] && i < n)
	{
		while (str[i + j] == to_find[j] && (i + j) < n && str[i + j])
		{
			j++;
			if (to_find[j] == '\0')
				return ((char *)str + i);
		}
		j = 0;
		i++;
	}
	return (0);
}
