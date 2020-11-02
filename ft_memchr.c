/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandera <sandera@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 14:53:11 by sandera           #+#    #+#             */
/*   Updated: 2020/10/29 15:41:01 by sandera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)arr + i) == (unsigned char)c)
			return ((void *)arr + i);
		i++;
	}
	return (NULL);
}
