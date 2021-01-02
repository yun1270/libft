#include "libft.h"
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set)
{
	char *str;
	int i;

	i = 0;
	if (!(str = malloc(sizeof(char))))
		return (NULL);
	//while (set[i] || !(str = ft_strchr(s1, set[i])))
	//{
	//	str = ft_strchr(s1, set[i]);
	//	i++;
	//}
	str = ft_strchr(s1, set[i]);
	str[i] = '\0';
	return (str);
}


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

char *ft_strrchr(const char *s, int c)
{
	char *str;
	char *an;

	str = (char *)s;
	an = NULL;
	while (*str)
		    {
				        if (*str == (char)c)
							            an = str;
						        str++;
								    }
	if (*str == c)
		return (str);
	return (an);
}

int main()
{
	char a[] = "havana";
	char set[] = "abc";
	char *str;
	int i = 0;

	while (set[i] || str == NULL)
	{
		str = ft_strchr(a, set[i]);
		i++;
	}
	while (i > 0 || str == NULL)
	{
		str = ft_strchr(a,set[i]);
		i--;
	}
	printf("%s\n",str);
	return 0;
}
