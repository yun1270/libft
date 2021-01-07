/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujung <yujung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 15:28:33 by yujung            #+#    #+#             */
/*   Updated: 2021/01/07 16:21:00 by yujung           ###   ########.fr       */
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
			n = (char *)needle;
			while (*n && *sh++ == *n)
				n++;
			if (*n == 0)
				return (h);
		}
		h++;
	}
	return (NULL);
}
