#include "libft.h"

static int	ft_char_in_string(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	left;
	size_t	right;

	if (s1 == NULL)
	{
		return (NULL);
	}
	left = 0;
	right = ft_strlen(s1);
	while (s1[left] && ft_char_in_string(s1[left], set))
	{
		left++;
	}
	while (left < right && ft_char_in_string(s1[right - 1], set))
	{
		right--;
	}
	ret = malloc(sizeof(char) * (right - left + 1));
	if (!ret)
		return (NULL);
	ft_memcpy(ret, s1 + left, right - left);
	ret[right - left] = '\0';
	return (ret);
}
