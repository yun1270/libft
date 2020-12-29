#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *ar, *s;
	
	s = (char *)s1;
	ar = (void *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (ar == 0)
		return (0);
	while (*s1)
		*ar++ = *s++;
	*ar = '\0';
	return (ar);
}
