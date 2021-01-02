#include "libft.h"
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	//int i;

	//i = 0;
	if (!(str = malloc(sizeof(char))))
		return (NULL);
	
	ft_strlcpy(str,s1,ft_strlen(s1));
	ft_strlcpy(str,s2,ft_strlen(s2));
	return (str);
}

int main()
{
	printf("%s\n", ft_strjoin("abc","def"));
	return 0;
}
