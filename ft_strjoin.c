#include "libft.h"
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	int i;

	i = 0;
	if (!(str = malloc(sizeof(char))))
		return (NULL);
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}

