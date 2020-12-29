#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	void *ar;

	ar = (void *)malloc(count * size);
	if (ar == 0)
		return (0);
	ft_memset(ar, 0, count * size);
	return (ar);
}
