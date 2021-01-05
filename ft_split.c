#include "libft.h"

char **ft_split(char const *s, char c)
{
	char **str;

	if (!(str = malloc(sizeof(char))))
		return (NULL);
	str[0] = s;
	str[1][0] = c;
	return (str);
}

int main()
{
	char s[] = "hello my frined";
	char c = ' ';


	return 0;
}
