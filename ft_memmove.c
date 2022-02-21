#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if ((dest == src) || n == 0)
		return (dest);
	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (dest <= src)
		{
			((unsigned char *)dest)[i]
				= ((const unsigned char *)src)[i];
		}
		else
		{
			((unsigned char *)dest)[n - 1 - i]
				= ((const unsigned char *)src)[n - 1 - i];
		}
		i++;
	}
	return (dest);
}
