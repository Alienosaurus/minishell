#include "libft.h"

char		*ft_strcat(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
