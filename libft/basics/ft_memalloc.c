#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*p;
	size_t	i;

	if (!(p = (void *)malloc(sizeof(char) * size)))
		return (NULL);
	i = -1;
	while (++i < size)
		((char *)p)[i] = 0;
	return (p);
}
