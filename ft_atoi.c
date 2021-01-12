/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujung <yujung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 14:46:29 by yujung            #+#    #+#             */
/*   Updated: 2021/01/07 14:46:35 by yujung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char ch)
{
	if (ch == ' ' || ch == '\t' || ch == '\n'
			|| ch == '\v' || ch == '\f' || ch == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	unsigned long long	ans;
	int				sign;

	ans = 0;
	sign = 1;
	while (*str && is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		ans *= 10;
		ans += (*str - '0');
		str++;
	}
	return (ans * sign);
}
