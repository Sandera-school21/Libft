#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next != NULL && lst != NULL)
		lst = lst->next;
	return (lst);
}
