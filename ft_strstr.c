/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujung <yujung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 16:32:57 by yujung            #+#    #+#             */
/*   Updated: 2021/06/25 16:33:02 by yujung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] == little[i] && big[i] && little[i])
		i++;
	if (big[i] == '\0' && little[i] == '\0')
	{
		return ((char *)big);
	}
	return (NULL);
}
