/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandera <sandera@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:30:19 by sandera           #+#    #+#             */
/*   Updated: 2020/10/28 14:44:59 by sandera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)dest + i) = c;
		i++;
	}
	return (dest);
}
