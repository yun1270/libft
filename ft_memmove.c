void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *d = (char *)dst;
	char *s = (char *)src;

	if (dst <= src)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d += len;
		s += len;
		while (len--)
			*--d = *--s;
	}

	return (dst);
}

