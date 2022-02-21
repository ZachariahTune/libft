#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst_new;

	if (lst == NULL || *lst == NULL || del == NULL)
	{
		return ;
	}
	while (lst && *lst)
	{
		lst_new = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = lst_new;
	}
}
