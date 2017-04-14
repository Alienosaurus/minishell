#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;

	i = 0;
	new = ft_strnew(ft_strlen(s));
	ft_strcpy(new, s);
	while (new[i])
	{
		new[i] = f(i, new[i]);
		i++;
	}
	return (new);
}
