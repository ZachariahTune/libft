#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		dif;
	size_t	i;

	i = 0;
	while (i < n)
	{
		dif = ((const unsigned char *)s1)[i]
			- ((const unsigned char *)s2)[i];
		if (dif != 0)
		{
			return (dif);
		}
		i++;
	}
	return (0);
}
