int ft_atoi(const char *str)
{
	int ans;
	char *s;

	ans = 0;
	s = (char *)str;
	while (*s == ' ')
		s++;
	while (*s)
	{
		if ('0' <= *s && *s <= '9')
			ans = ans * 10 + (*s - '0');
		else
			break;
		s++;
	}
	return (ans);
}

