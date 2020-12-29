char *ft_strrchr(const char *s, int c)
{
    char *d;
	char *t;

	d = (char *)s;
    t = NULL;
	while (*d)
    {
        if (*d == c)
            t = d;
        d++;
    }
    return (t);
}

