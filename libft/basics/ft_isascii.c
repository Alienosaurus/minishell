#include "libft.h"

int		ft_isascii(int c)
{
	if (127 < c || c < 0)
		return (0);
	return (1);
}
