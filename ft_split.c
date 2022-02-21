#include "libft.h"

static int	ft_split_count(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
		{
			i++;
		}
		if (str[i])
		{
			count++;
		}
		while (str[i] && str[i] != c)
		{
			i++;
		}
	}
	return (count);
}

static int	ft_split_next_del(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
	{
		i++;
	}
	return (i);
}

static char	*ft_split_newmalloc(size_t size)
{
	char	*ret;

	ret = malloc(sizeof(char) * size + 1);
	if (!ret)
	{
		return (NULL);
	}
	ft_bzero(ret, size + 1);
	return (ret);
}

static char	**ft_split_dbl(char const *s, char c, int word_i, int s_char_i)
{
	int		param[2];
	char	**ret;

	param[0] = ft_split_count(s, c);
	ret = malloc(sizeof(char *) * (param[0] + 1));
	if (!ret)
		return (NULL);
	while (++word_i < param[0])
	{
		while (s[s_char_i] == c)
			s_char_i++;
		param[1] = ft_split_next_del(&s[s_char_i], c);
		ret[word_i] = ft_split_newmalloc(param[1] + 1);
		if (!ret[word_i])
		{
			ft_array_free(ret, word_i);
			free(ret);
			ret = NULL;
			return (NULL);
		}
		ft_memcpy(ret[word_i], s + s_char_i, param[1]);
		s_char_i = s_char_i + param[1];
	}
	ret[word_i] = NULL;
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;

	if (s == NULL)
	{
		return (NULL);
	}
	ret = ft_split_dbl(s, c, -1, 0);
	return (ret);
}
