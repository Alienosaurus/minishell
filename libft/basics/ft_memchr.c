#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (s)
		while (n-- > 0)
		{
			if ((unsigned char)c == *((unsigned char *)s))
				return ((void *)s);
			s++;
		}
	return (NULL);
}
