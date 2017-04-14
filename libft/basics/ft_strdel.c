#include "libft.h"

void	ft_strdel(char **ap)
{
	if (ap && *ap)
		free(*ap);
	*ap = NULL;
}
