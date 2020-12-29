int ft_strncmp(const void *s1, const void *s2, size_t n)
{
    char *str1 = (char *)s1;
    char *str2 = (char *)s2;
    while (n--)
    {
        if (*str1 != *str2)
            return (*str1 - *str2);
        str1++;
        str2++;
		if (*str1 == 0 || *str2 == 0)
			break;
	}
    return (0);
}

