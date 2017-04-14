#include "libft.h"

void	ft_exit(int mode)
{
	if (mode)
		ft_putstr("error");
	exit(0);
}
