#include "minishell.h"

/*
** Put syntax_color_off at ON.
*/

void		ft_syntax_color(t_stream *stream)
{
	stream->config->syntax_color_off ^= 1;
}
