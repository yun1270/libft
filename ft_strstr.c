#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] == little[i] && big[i] && little[i])
		i++;
	if (big[i] == '\0' && little[i] == '\0')
	{
		return ((char *)big);
	}
	return (NULL);
}
