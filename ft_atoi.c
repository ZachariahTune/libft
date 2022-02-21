#include "libft.h"

int	ft_atoi(const char *str)
{
	int			par_i[2];
	long int	par_l[2];

	par_i[0] = 0;
	while ((str[par_i[0]] >= 9 && str[par_i[0]] <= 13) || str[par_i[0]] == 32)
		par_i[0]++;
	par_i[1] = 1;
	if (str[par_i[0]] == '-' || str[par_i[0]] == '+')
	{
		if (str[par_i[0]] == '-')
			par_i[1] = -1;
		par_i[0]++;
	}
	par_l[0] = 0;
	while (str[par_i[0]] >= '0' && str[par_i[0]] <= '9')
	{
		par_l[1] = par_l[0];
		par_l[0] = par_l[0] * 10 + (str[par_i[0]] - 48);
		if (par_l[0] < par_l[1] && par_i[1] == 1)
			return (-1);
		if (par_l[0] < par_l[1] && par_i[1] == -1)
			return (0);
		par_i[0]++;
	}
	return (par_l[0] * par_i[1]);
}
