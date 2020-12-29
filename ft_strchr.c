char *ft_strchr(const char *s, int c)
{
	char *d;
   
	d = (char *)s;
	while (*d)
	{
		if(*d == c)
			return (d);
		d++;
	}
	return (NULL);
}

