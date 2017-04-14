#include "minishell.h"

static void	ft_up_search(t_stream *stream)
{
	char	*com;
	size_t	len;

	com = stream->config->history[stream->config->hindex];
	len = ft_strlen(com);
	while (stream->shindex != stream->config->hindex
		&& stream->config->history[stream->shindex]
		&& (ft_strncmp(com, stream->config->history[stream->shindex], len - 1)))
		ft_decr_history(&(stream->shindex));
}

void		ft_up(t_stream *stream)
{
	ft_gohome(stream);
	if (stream->search)
		ft_searchengine(stream);
	ft_decr_history(&(stream->shindex));
	if (stream->config->history[stream->config->hindex]
		&& stream->config->history[stream->config->hindex][0])
		ft_up_search(stream);
	if (stream->shindex != stream->config->hindex
		&& stream->config->history[stream->shindex])
	{
		if (stream->config->history[stream->shindex]
			&& ft_freegiveone((void **)&(stream->command))
			&& (stream->command = stream->config->history[stream->shindex])
			&& !(stream->command = ft_strdup(stream->command))
			&& (stream->state = -2))
			return ;
		else
		{
			stream->pos = 0;
			ft_goend(stream);
		}
	}
	else
		ft_down(stream);
	ft_winsize();
}
