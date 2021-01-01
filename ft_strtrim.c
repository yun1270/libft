#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *str;
	int i;

	i = 0;
	if (!(str = malloc(sizeof(char))))
		return (NULL);
	while (set[i] || !(ft_strchr(s1, set[i])))
		i++;
	while (set[i] || !(ft_strrchr(s1, set[i])))
		i--;
		
	str[i] = '\0';
	return (str);
}
