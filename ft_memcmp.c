/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandera <sandera@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 16:13:00 by sandera           #+#    #+#             */
/*   Updated: 2020/10/29 16:47:30 by sandera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char*)arr1 + i) == *((unsigned char *)arr2 + i))
			i++;
		else
			return (*((unsigned char*)arr1 + i) - *((unsigned char *)arr2 + i));
	}
	return (0);
}
