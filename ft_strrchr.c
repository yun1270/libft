char *ft_strrchr(const char *s, int c)
{
	char *str;
	char *an;

	str = (char *)s;
	an = NULL;
	while (*str)
    {
        if (*str == (char)c)
            an = str;
        str++;
    }
	if (*str == c)
		return (str);
	return (an);
}

