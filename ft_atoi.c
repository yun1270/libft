int is_space(char ch)
{
	if (ch == ' ' || ch == '\t' || ch == '\n'
			|| ch == '\v' || ch == '\f' || ch == '\r')
		return (1);
	return (0);
}

int ft_atoi(const char *str)
{
	unsigned int ans;
	int sign;
	char *s;

	ans = 0;
	sign = 1;
	s = (char *)str;
	while (is_space(*s))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
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

