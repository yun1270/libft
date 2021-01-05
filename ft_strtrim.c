#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *str;
	int start;
	int	end;
	int i = 0;

	start = 0;
	end = ft_strlen(s1);
	if (!(str = malloc(sizeof(char))))
		return (0);	
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	while (start <= end)
	{
		str[i] = s1[start++];
		i++;
	}
	str[i] = '\0';
	return (str);
}
