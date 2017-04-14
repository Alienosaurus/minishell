#include "libft.h"

int		ft_isalpha(int c)
{
	if (c < 'A' || ('Z' < c && c < 'a') || 'z' < c)
		return (0);
	return (1);
}
