

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	size_t				i;

	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (src[i] == (unsigned char) c)
			return ((char *)src + i);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// int main()
// {
// 	unsigned char c[] = "hsdfghjkjhgcxcvbn";
// 	printf("%s", (unsigned char *)ft_memchr(c, 'f', 12));
// }
