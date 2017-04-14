#include "minishell.h"

static int	ft_parseparams(char **argv, int *param)
{
	int	i;

	i = 0;
	while (argv[++i] && argv[i][0] == '-' && argv[i][1] == 'n')
		*param |= ECHO_N;
	return (i);
}

void		ft_echo(char **argv)
{
	int	i;
	int	param;

	param = 0;
	i = ft_parseparams(argv, &param);
	while (argv[i])
	{
		ft_putstr(argv[i]);
		if (argv[++i])
			ft_putchar(' ');
	}
	if (!(param & ECHO_N))
		ft_putchar('\n');
}
