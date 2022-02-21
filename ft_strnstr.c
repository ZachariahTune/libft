#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle[0])
	{
		return ((char *)haystack);
	}
	i = 0;
	while (haystack[i] && len > i)
	{
		j = 0;
		while (haystack[i + j] && needle[j]
			&& haystack[i + j] == needle[j] && len > (i + j))
		{
			j++;
		}
		if (!needle[j])
		{
			return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
