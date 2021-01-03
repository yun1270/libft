#include "libft.h"
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	char *d;
	   
	d = (char *)s;
	while (*d != c)
	{
		if(*d == '\0')
			return (0);
		d++;
	}
	return (d);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *str;
	int i;

	i = 0;
	if (!(str = malloc(sizeof(char))))
		return (NULL);
	
	while (set[i])
	{
		str = ft_strchr(s1,set[i++]);
	}
	str[i] = '\0';
	return (str);
}

int main()
{
	char s1[] = "hello";
	char set[] = "he";
	char *str;
	int i = 0;

	while (set[i])
	{
		str = ft_strchr(s1,set[i++]);
	}
	printf("%s\n",str);
	return 0;
}
