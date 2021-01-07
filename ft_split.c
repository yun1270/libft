/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujung <yujung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 15:10:33 by yujung            #+#    #+#             */
/*   Updated: 2021/01/07 15:54:30 by yujung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			count(char const *s, char c)
{
	int		i;
	int		n;
	int		st;

	n = 0;
	i = 0;
	st = 0;
	while (s[i])
	{
		if (s[i] == c)
			st = 0;
		else if (st == 0)
		{
			st = 1;
			n++;
		}
		i++;
	}
	return (n);
}

int			count_c(char const *s, char c, int i)
{
	int		n;

	n = 0;
	while (s[i] != c && s[i++])
		n++;
	return (n);
}

char		**get_str(char **str, char const *s, char c, int n)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (s[i] && j < n)
	{
		k = 0;
		while (s[i] == c)
			i++;
		if (!(str[j] = malloc(sizeof(char) * count_c(s, c, i) + 1)))
		{
			while (j > 0)
				free((void *)str[j--]);
			free(str);
			return (NULL);
		}
		while (s[i] != c && s[i])
			str[j][k++] = s[i++];
		str[j++][k] = '\0';
	}
	str[j] = 0;
	return (str);
}

char		**ft_split(char const *s, char c)
{
	char	**str;
	int		n;

	if (s == NULL)
		return (NULL);
	n = count(s, c);
	if (!(str = malloc(sizeof(char *) * (n + 1))))
		return (NULL);
	return (get_str(str, s, c, n));
}
