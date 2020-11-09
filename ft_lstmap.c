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
			return NULL;
		}
		ft_lstadd_back(&list1, list2);
		lst = lst->next;
	}
	return (list1);
}