#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	char *ar;

	if (!(ar = malloc(count * size)))
		return (NULL);
	ft_bzero(ar, (count * size));
	return (ar);
}
