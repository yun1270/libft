/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujung <yujung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 15:15:40 by yujung            #+#    #+#             */
/*   Updated: 2021/01/07 15:16:44 by yujung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *d;

	d = (char *)s;
	while (*d != c)
	{
		if (*d == '\0')
			return (0);
		d++;
	}
	return (d);
}
