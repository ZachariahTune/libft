#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;
	size_t	tsize;

	tsize = nmemb * size;
	ret = malloc(tsize);
	if (!ret)
	{
		return (NULL);
	}
	ft_bzero(ret, tsize);
	return (ret);
}
