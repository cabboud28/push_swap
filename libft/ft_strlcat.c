/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabboud <cabboud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 08:38:19 by cabboud           #+#    #+#             */
/*   Updated: 2026/02/16 08:38:19 by cabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	destlen;

	srclen = ft_strlen(src);
	destlen = ft_strlen((const char *) dest);
	if (size < destlen + 1)
		return (size + srclen);
	i = destlen;
	j = 0;
	while (src[j] && (j < size - destlen -1))
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (destlen + srclen);
}
