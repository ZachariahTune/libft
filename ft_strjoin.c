#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	s1len;
	size_t	s2len;
	size_t	s12len;

	if (s1 == NULL && s2 == NULL)
		return (ft_strdup(""));
	if (s1 != NULL && s2 == NULL)
		return (ft_strdup(s1));
	if (s1 == NULL && s2 != NULL)
		return (ft_strdup(s2));
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	s12len = s1len + s2len;
	ret = malloc(sizeof(char) * (s12len + 1));
	if (!ret)
		return (NULL);
	ft_memcpy(ret, s1, s1len);
	ft_memcpy(ret + s1len, s2, s2len);
	ret[s12len] = '\0';
	return (ret);
}
