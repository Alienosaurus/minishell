#include "libft.h"

void	ft_usage(char *name, char *usage)
{
	ft_putstr(name);
	ft_putstr(" : usage : ");
	ft_putstr(usage);
	ft_exit(0);
}
