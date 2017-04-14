#include "minishell.h"

int			ft_proscmp(void *pid1, void *pid2)
{
	return (*((pid_t *)pid1) - *((pid_t *)pid2));
}

int			ft_ascii_cmp(t_bin *s1, t_bin *s2)
{
	return (s1->name[0] - s2->name[0]);
}
