/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandera <sandera@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:14:35 by sandera           #+#    #+#             */
/*   Updated: 2020/11/04 21:24:21 by sandera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		idst;
	size_t		isrc;
	size_t		sum_count;

	idst = ft_strlen(dest);
	isrc = 0;
	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dest))
		return (sum_count = ft_strlen(src) + size);
	else
		sum_count = ft_strlen(src) + ft_strlen(dest);
	while (src[isrc] != '\0' && idst + 1 < size)
	{
		dest[idst] = src[isrc];
		idst++;
		isrc++;
	}
	dest[idst] = '\0';
	return (sum_count);
}
