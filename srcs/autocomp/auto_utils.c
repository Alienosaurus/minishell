#include "minishell.h"

int		ft_is_separator(char c)
{
	if (c == ';')
		return (1);
	if (c == '"')
		return (1);
	if (c == '&')
		return (1);
	if (c == '|')
		return (1);
	if (ft_isspace(c))
		return (1);
	return (0);
}

/*
** Define COMP_BEGIN with strsub. It represent the needle to look for.
*/

char	*get_begin(int i, char *str, size_t *len)
{
	while (i >= 0 && !ft_is_separator(str[i]))
	{
		i -= 1;
		*len += 1;
	}
	return (str + i + 1);
}
