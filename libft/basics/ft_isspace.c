#include "libft.h"

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t'
		|| c == '\r' || c == '\f'
		|| c == '\n' || c == '\v')
		return (1);
	return (0);
}
