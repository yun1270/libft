void *ft_memcpy(void *dst, const void *src, size_t n)
{
	char *d = (char *)dst;
	const char *s = (char *)src;

	while (n--)
		*d++ = *s++;

	return (dst);
}

