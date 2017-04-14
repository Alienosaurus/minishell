#include "list.h"
#include "dclist.h"

void		ft_dclist_push_front(t_dclist **begin_list, void *data,
			size_t data_size)
{
	t_dclist	*p;

	if (*begin_list == NULL)
	{
		*begin_list = ft_dclstnew(data, data_size);
		(*begin_list)->next = *begin_list;
		(*begin_list)->prev = *begin_list;
	}
	else
	{
		p = ft_dclstnew(data, data_size);
		p->next = *begin_list;
		(*begin_list)->prev = p;
		*begin_list = p;
		p = ft_dclist_last(p->next);
		p->next = *begin_list;
		*begin_list = p;
	}
}

void		ft_list_push_front(t_list **begin_list, t_list *elem)
{
	t_list	*p;

	if (*begin_list == NULL)
		*begin_list = elem;
	else
	{
		p = elem;
		p->next = *begin_list;
		(*begin_list) = p;
	}
}
