#include "minishell.h"

void		ft_prompt(t_config *config)
{
	t_stream	*stream;

	stream = ft_save_stream(NULL);
	if (!config->heredoc)
	{
		if (!config->last_exit)
			ft_putstr_fd("\x1b[34m-> \x1b[1;32m", SFD);
		else
			ft_putstr_fd("\x1b[31m-> \x1b[1;32m", SFD);
	}
	ft_putstr_fd(config->pwd_subrep, SFD);
	if (!config->heredoc)
		ft_putstr_fd(" : \x1b[0m", SFD);
}
