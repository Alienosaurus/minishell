#include "libft.h"

char			*ft_strdup(const char *s)
{
	char	*new;

	if (!s || !(new = ft_strnew(ft_strlen(s))))
		return (NULL);
	return (ft_strcpy(new, s));
}
