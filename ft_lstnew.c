#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ret;

	ret = malloc(sizeof(t_list));
	if (!ret)
	{
		return (NULL);
	}
	ret->next = NULL;
	ret->content = content;
	return (ret);
}
