#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = ft_strlen(dest);
	while (*src && n--)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
