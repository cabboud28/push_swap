/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabboud <cabboud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 08:38:00 by cabboud           #+#    #+#             */
/*   Updated: 2026/02/16 08:38:00 by cabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char) c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
//  int main()
//  {
// 	char s1[100] = "hello my name is maya how are you miled";
// 	printf("%s", (char *) strchr(s1, 'm'));
//  }
//remember you should always cast ints to unsigned char
//to compare with s[i]