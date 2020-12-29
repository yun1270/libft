void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *d = (char *)dst;
	const char *s = (char *)src;

	while (n--)
	{
		if (*s == c)
		{
			*d++ = *s++;
			return (dst);
		}
		*d++ = *s++;
	}
	return (NULL);
}	
