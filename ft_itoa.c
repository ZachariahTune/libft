#include "libft.h"

static size_t	ft_itoa_nlen(long int n)
{
	size_t	nlen;

	if (n > 0)
	{
		nlen = 0;
	}
	if (n <= 0)
	{
		nlen = 1;
	}
	while (n != 0)
	{
		n = n / 10;
		nlen++;
	}
	return (nlen);
}

static void	ft_itoa_convert(char *str, long int n, size_t nlen)
{
	if (n == 0)
	{
		str[0] = '0';
	}
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n != 0)
	{
		str[nlen - 1] = n % 10 + 48;
		n = n / 10;
		nlen--;
	}
}

char	*ft_itoa(int n)
{
	char	*ret;
	size_t	nlen;

	nlen = ft_itoa_nlen((long int)n);
	ret = malloc(sizeof(char) * (nlen + 1));
	if (!ret)
	{
		return (NULL);
	}
	ft_itoa_convert(ret, (long int)n, nlen);
	ret[nlen] = '\0';
	return (ret);
}
