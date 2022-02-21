#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		dif;

	i = 0;
	while ((((const unsigned char *)s1)[i]
		|| ((const unsigned char *)s2)[i]) && (i < n))
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
