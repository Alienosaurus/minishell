#include "list.h"
#include "dclist.h"

t_dclist		*ft_dclist_last(t_dclist *begin_list)
{
	int			i;
	t_dclist	*memo;

	i = 1;
	memo = begin_list;
	while (begin_list->next != memo)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (begin_list);
}

t_list			*ft_list_last(t_list *begin_list)
{
	int			i;

	i = 1;
	while (begin_list->next)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (begin_list);
}
