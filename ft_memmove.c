/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujung <yujung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 15:07:04 by yujung            #+#    #+#             */
/*   Updated: 2021/01/07 15:07:39 by yujung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;
	size_t i;

	if (!dst && !src)
		return (0);	
	i = 0;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (src < dst)
	{
		while (i++ < len)
			d[len - i] = s[len - i];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
