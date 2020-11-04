/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandera <sandera@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:14:35 by sandera           #+#    #+#             */
/*   Updated: 2020/11/04 22:10:18 by sandera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**list_free(char **s, size_t i)
{
	while (s[i] != 0 && i >= 0)
	{
		free(s[i]);
		i--;
	}
	free(s);
	return (NULL);
}

static int	c_list(char const *s, char c)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			i++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (i);
}

char		**ft_split(char const *s, char c)
{
	char	**list;
	size_t	l_in;
	size_t	count_sym;
	size_t	d_c;

	l_in = 0;
	if (!s || !(list = (char **)malloc(sizeof(char *) * (c_list(s, c) + 1))))
		return (NULL);
	d_c = c_list(s, c);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			count_sym = 0;
			while (*(s + count_sym) && *(s + count_sym) != c)
				count_sym++;
			if (l_in < d_c && !(list[l_in++] = ft_substr(s, 0, count_sym)))
				return (list_free(list, l_in));
			s = s + count_sym;
		}
	}
	list[l_in] = NULL;
	return (list);
}
