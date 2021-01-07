/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujung <yujung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 15:28:33 by yujung            #+#    #+#             */
/*   Updated: 2021/01/07 15:29:55 by yujung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*sh;
	char	*n;

	n = (char *)needle;
	h = (char *)haystack;
	if (*needle == 0)
		return ((char *)haystack);
	while (len-- && ft_strlen(needle) < len)
	{
		if (*h == *n)
		{
			sh = (char *)h;
			while (*n)
			{
				if (*sh != *n)
				{
					n = (char *)needle;
					break ;
				}
				n++;
				sh++;
			}
			if (*n == 0)
				return (h);
		}
		h++;
	}
	return (NULL);
}
