#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

void	ft_putstr_str_str_fd(char *name, char *file,
		char *error, int fd)
{
	if (name)
		ft_putstr_fd(name, fd);
	if (file)
		ft_putstr_fd(file, fd);
	if (error)
		ft_putstr_fd(error, fd);
}
