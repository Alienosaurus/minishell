#include "libft.h"

int		ft_status(int value)
{
	static int	status = 0;

	if (value)
	{
		status = value;
		return (1);
	}
	return (status);
}
