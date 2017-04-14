#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n-- > 0)
	{
		*((unsigned char *)dest) = *((unsigned char *)src);
		if (*((unsigned char *)src) == (unsigned char)c)
			return (dest + 1);
		src++;
		dest++;
	}
	return (NULL);
}
