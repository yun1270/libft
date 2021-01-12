/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujung <yujung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 15:30:17 by yujung            #+#    #+#             */
/*   Updated: 2021/01/07 15:30:48 by yujung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*an;

	str = (char *)s;
	an = NULL;
	while (*str)
	{
		if (*str == (char)c)
			an = str;
		str++;
	}
	if (*str == c)
		an = str;
	return (an);
}
