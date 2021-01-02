#include "libft.h"

int count(int n)
{
	int i;
	unsigned int num;

	i = 0;
	num = n;
	if (num < 0)
	{
		num *= -1;
		i++;
	}
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int n)
{
	char *str;
	int i;
	unsigned int num;

	i = count(n);
	num = n;
	if (!(str = malloc(sizeof(char))))
		return (NULL);
	//if (num)
	return (NULL);
}
