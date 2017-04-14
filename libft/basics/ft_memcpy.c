#include "libft.h"

void				*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*to;

	to = (unsigned char *)dest;
	if (dest && src)
		while (n-- > 0)
		{
			*to = *((unsigned char *)src);
			src++;
			to++;
		}
	else
		return (NULL);
	return (dest);
}
