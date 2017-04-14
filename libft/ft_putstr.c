#include "libft.h"

void	ft_putstr(char *s)
{
	write(1, s, ft_strlen(s));
}

void	ft_putstr_nbr_str(char *str, int nbr, char *tab)
{
	if (str)
		ft_putstr(str);
	ft_putnbr(nbr);
	if (tab)
		ft_putstr(tab);
}
