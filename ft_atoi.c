/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujung <yujung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 14:46:29 by yujung            #+#    #+#             */
/*   Updated: 2021/01/13 18:42:44 by yujung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int						ft_atoi(const char *str)
{
	unsigned long long	ans;
	int					sign;

	if (*str == 0)
		return (0);
	ans = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && ('0' <= *str && *str <= '9'))
	{
		ans = ans * 10 + (*str - '0');
		str++;
	}
	if (ans > 9223372036854775807)
		return (sign == -1) ? 0 : -1;
	return (ans * sign);
}
