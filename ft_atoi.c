int ft_atoi(const char *str)
{
	unsigned int ans;
	int sign;
	char *s;

	ans = 0;
	sign = 1;
	s = (char *)str;
	while (*s == ' ')
		s++;
	if (*s == '-' || *s == '+')
	{
		s++;
		if (*s == '-')
			sign = -1;
	}
	while (*s)
	{
		if ('0' <= *s && *s <= '9')
			ans = ans * 10 + (*s - '0');
		else
			break;
		s++;
	}
	return (sign * ans);
}

