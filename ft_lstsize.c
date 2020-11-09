
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	long i;

	i = 0;
	if (!lst)
		return 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
