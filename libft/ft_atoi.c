#include "libft.h"

int		ft_atoi(char *str)
{
	int target;
	int signe;

	signe = 1;
	target = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\f' || *str == '\r' || *str == '\v')
		str++;
	if (*str == '-')
		signe = -1;
	if (*str == '-' || *str == '+')
		str++;
	while ('9' >= *str && *str >= '0' && *str)
	{
		target = (target * 10) + (*str - '0');
		str++;
	}
	return (target * signe);
}
