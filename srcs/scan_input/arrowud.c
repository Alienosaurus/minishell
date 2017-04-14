#include "minishell.h"

/*
**Moves cursor on the last colum.
*/

void	ft_goend(t_stream *stream)
{
	if (stream->command)
		while (stream->command[stream->pos])
			ft_mvright(stream);
}

/*
**Moves cursor on the first column after the prompt.
*/

void	ft_gohome(t_stream *stream)
{
	while (stream->pos)
		ft_mvleft(stream);
}

void	ft_ctrlup(t_stream *stream)
{
	size_t		col;

	if (stream->search)
		ft_searchengine(stream);
	col = stream->col;
	while (col--)
		ft_left(stream);
}

void	ft_ctrldown(t_stream *stream)
{
	size_t		col;

	if (stream->search)
		ft_searchengine(stream);
	col = stream->col;
	while (col--)
		ft_right(stream);
}
