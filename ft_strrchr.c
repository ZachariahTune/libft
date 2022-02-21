#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ret;

	i = 0;
	ret = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			ret = ((char *)(s + i));
		}
		i++;
	}
	if ((char)c == '\0')
	{
		ret = ((char *)(s + i));
	}
	return (ret);
}
