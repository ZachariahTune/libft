#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	needlen;

	if (s == NULL)
	{
		return (NULL);
	}
	needlen = ft_strlen(s) - (size_t)start;
	if ((long int)needlen <= 0)
	{
		return (ft_strdup(""));
	}
	if (needlen > len)
	{
		needlen = len;
	}
	ret = (char *)malloc(sizeof(char) * (needlen + 1));
	if (!ret)
	{
		return (NULL);
	}
	ft_memcpy(ret, s + start, needlen);
	ret[needlen] = '\0';
	return (ret);
}
