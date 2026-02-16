
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

// void test(unsigned int i, char *c)
// {
// 	*c += i;
// }
// #include <stdio.h>
// int main()
// {
// 	char s[] = "i wanna sleep";
// 	ft_striteri(s,test);
// 	printf("%s", s);
// }
//meaningful test string is "000000" so you see the iterations working
