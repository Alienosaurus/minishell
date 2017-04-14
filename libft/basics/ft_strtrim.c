#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*cpy;
	size_t	i;

	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	i = 0;
	while (s[i])
		i++;
	while (i > 0 && (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'))
		i--;
	if (i == 0)
		return (NULL);
	cpy = ft_strnew(i);
	if (!cpy)
		return (NULL);
	cpy = ft_strncpy(cpy, s, i);
	cpy[i] = '\0';
	return (cpy);
}
