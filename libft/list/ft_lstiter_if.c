#include "list.h"
#include "dclist.h"

void	ft_dclstiter_if(t_dclist *begin_list,
		void (*f)(void *), void *data_ref, int (*cmp)())
{
	t_dclist	*stop;

	if ((stop = begin_list))
	{
		if ((*cmp)(begin_list->data, data_ref) == 0)
			(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
	while (begin_list != stop)
	{
		if ((*cmp)(begin_list->data, data_ref) == 0)
			(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

void	ft_lstiter_if(t_list *begin_list,
		void (*f)(void *), void *data_ref, int (*cmp)())
{
	while (begin_list)
	{
		if ((*cmp)(begin_list->data, data_ref) == 0)
			(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}
