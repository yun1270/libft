size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_len;
	size_t j;
	size_t i;

	dst_len = 0;
	j = 0;
	i = 0;
	while (src[j])
		j++;
	while (dst[dst_len])
		dst_len++;
	while (i < j && dst_len + i + 1 < dstsize)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	
	if (dstsize < dst_len)
		j += dstsize;
	else
		j += dst_len;
	return (j);
}

