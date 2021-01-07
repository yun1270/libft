/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujung <yujung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 14:49:56 by yujung            #+#    #+#             */
/*   Updated: 2021/01/07 15:54:59 by yujung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int					count(int n)
{
	int				i;
	unsigned int	num;

	i = 0;
	num = n;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		num *= (-1);
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

	i = count(n);
	num = n;
	if (!(str = malloc(sizeof(char))))
		return (NULL);
	str[i] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		num *= (-1);
	}
	while (i-- >= 0)
	{
		if (i == 0 && str[0] == '-')
			break ;
		str[i] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
