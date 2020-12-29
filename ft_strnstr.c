char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *h, *sh, *n;
	int needle_len, num;
	
	n = (char *)needle;   
	h = (char *)haystack;
	needle_len = 0;
	while (needle[needle_len])
		needle_len++;
	while (len-- && needle_len < len)
	{
		if (*h == *n)
		{
			sh = (char *)h;
			while (*n)
			{
				if (*sh != *n)
				{
					n = (char *)needle;
					break;
				}
				n++;
				sh++;
			}
			if (*n == 0)
				return (h);
		}
		h++;
	}
	return (NULL);
}
