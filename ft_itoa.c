/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujung <yujung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 14:49:56 by yujung            #+#    #+#             */
/*   Updated: 2021/01/13 18:47:21 by yujung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			count(int n)
{
	int				i;
	unsigned int	num;

	i = 0;
	num = n;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		num *= -1;
		i++;
	}
	while (num != 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char				*ft_itoa(int n)
{
	char			*str;
	int				i;
	unsigned int	num;
	int				sign;

	i = count(n);
	num = n;
	sign = 1;
	if (!(str = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i--] = '\0';
	if (n < 0)
	{
		sign = -1;
		num *= (-1);
	}
	while (i >= 0)
	{
		str[i--] = (num % 10) + '0';
		num /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
