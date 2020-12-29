void *ft_memset(void *b, int c, size_t len)
{
	char* pb = (char*)b;

	while (len--)
		pb[len] = c;
	return (b);
}

