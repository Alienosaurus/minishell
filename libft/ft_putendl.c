#include "libft.h"

void	ft_putendl(char *s)
{
	ft_putstr(s);
	ft_putstr("\n");
}

void	ft_putcolendl(char *s, char *col)
{
	if (!ft_strcmp(col, "RED"))
		ft_putstr(ANSI_COLOR_RED);
	if (!ft_strcmp(col, "YELLOW"))
		ft_putstr(ANSI_COLOR_YELLOW);
	if (!ft_strcmp(col, "BLUE"))
		ft_putstr(ANSI_COLOR_BLUE);
	if (!ft_strcmp(col, "MAGENTA"))
		ft_putstr(ANSI_COLOR_MAGENTA);
	if (!ft_strcmp(col, "CYAN"))
		ft_putstr(ANSI_COLOR_CYAN);
	if (!ft_strcmp(col, "RESET"))
		ft_putstr(ANSI_COLOR_RESET);
	if (s)
	{
		ft_putstr(s);
		ft_putstr(ANSI_COLOR_RESET);
		ft_putstr("\n");
	}
}
