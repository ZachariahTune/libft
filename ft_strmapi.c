#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ret;

	if (s == NULL || f == NULL)
	{
		return (NULL);
	}
	ret = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ret)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
