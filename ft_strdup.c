#include <stdlib.h>

char *ft_strdup(const char *s1)
{
	char *ar;
	int s1_len, i;

	s1_len = 0;
	while (s1[s1_len])
		s1_len++;
	if (!(ar = malloc(sizeof(char) * s1_len)))
		return (NULL);
	i = 0;
	while (s1[i])
		ar[i] = s1[i];
	ar[i] = '\0';
	return (ar);
}
