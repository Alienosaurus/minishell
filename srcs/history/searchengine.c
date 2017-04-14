#include "minishell.h"

void		ft_searchinhistory(t_stream *stream)
{
	ft_decr_history(&(stream->shindex));
	while (stream->shindex != stream->config->hindex
		&& stream->config->history[stream->shindex]
		&& !(ft_strstr(stream->config->history[stream->shindex],
			stream->search)))
		ft_decr_history(&(stream->shindex));
}

void		ft_searchengineend(t_stream *stream)
{
	int	index;

	index = -1;
	ft_winsize();
	if (stream->search)
	{
		if (stream->command && stream->search[0])
			index = ft_strstri(stream->command, stream->search);
		ft_freegiveone((void**)&(stream->search));
		stream->search = NULL;
		if (index != -1)
			ft_gomatch(stream, (size_t)index);
	}
}

void		ft_searchengine(t_stream *stream)
{
	if (!(stream->search))
	{
		stream->search = ft_strnew(1);
		ft_sprompt(stream);
	}
	else
		ft_searchengineend(stream);
}
