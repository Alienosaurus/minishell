#include "libft.h"

void				*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;

	if (dest <= src)
	{
		i = -1;
		while (++i < n)
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	}
	else
	{
		i = n;
		while (i-- > 0)
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	}
	return (dest);
}
