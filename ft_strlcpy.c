size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t src_size;	
	size_t i;

	src_size = 0;
	i = 0;
	if (dst == NULL || src == NULL)
		return (0);
	while (src[src_size])
		src_size++;
	while (i < src_size && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (src_size);
}
