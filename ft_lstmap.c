/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandera <sandera@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:13:06 by sandera           #+#    #+#             */
/*   Updated: 2020/11/09 20:21:28 by sandera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *list1;
	t_list *list2;

	if (!lst || !f)
		return (NULL);
	list1 = NULL;
	while (lst)
	{
		if (!(list2 = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&list1, del);
			return (NULL);
		}
		ft_lstadd_back(&list1, list2);
		lst = lst->next;
	}
	return (list1);
}
