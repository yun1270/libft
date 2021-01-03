#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	unsigned int i;

	i = 0;
	if (!(str = malloc(sizeof(char))))
		return (NULL);
	while (i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}

