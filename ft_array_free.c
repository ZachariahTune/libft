#include "libft.h"

void	ft_array_free(char **array, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(array[i]);
		array[i] = NULL;
		i++;
	}
}
