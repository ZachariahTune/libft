#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ret;
	size_t	slen;

	slen = ft_strlen(s);
	ret = malloc(sizeof(char) * (slen + 1));
	if (!ret)
	{
		return (NULL);
	}
	ft_memcpy(ret, s, slen);
	ret[slen] = '\0';
	return (ret);
}
