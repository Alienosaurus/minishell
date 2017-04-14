#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cpy;

	if (!(cpy = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	cpy = ft_strcpy(cpy, s1);
	cpy = ft_strcat(cpy, s2);
	return (cpy);
}
