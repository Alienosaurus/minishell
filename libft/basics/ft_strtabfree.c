#include "libft.h"

void	ft_strtabfree(char **tab)
{
	size_t	i;

	if (tab)
	{
		i = -1;
		while (tab[++i])
			free(tab[i]);
		free(tab);
	}
}
