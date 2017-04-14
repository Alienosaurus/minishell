#include "libft.h"

int		ft_freegiveone(void **kill)
{
	if (kill && *kill)
	{
		free(*kill);
		*kill = NULL;
	}
	return (1);
}
