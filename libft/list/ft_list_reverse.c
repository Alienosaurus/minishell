#include "list.h"
#include "dclist.h"

void	ft_dclist_reverse(t_dclist **begin_list)
{
	t_dclist	*memo;
	t_dclist	*stop;

	if (begin_list && *begin_list && (*begin_list)->next != *begin_list)
	{
		stop = *begin_list;
		memo = (*begin_list)->next;
		(*begin_list)->next = (*begin_list)->prev;
		(*begin_list)->prev = memo;
		(*begin_list) = (*begin_list)->next;
		while (*begin_list != stop)
		{
			memo = (*begin_list)->next;
			(*begin_list)->next = (*begin_list)->prev;
			(*begin_list)->prev = memo;
			(*begin_list) = (*begin_list)->next;
		}
	}
}

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*stick;
	t_list	*reverse;
	t_list	*turtle;

	if (begin_list && *begin_list && (*begin_list)->next)
	{
		stick = (*begin_list)->next;
		reverse = *begin_list;
		(reverse)->next = NULL;
		while (stick->next)
		{
			turtle = reverse;
			reverse = stick;
			stick = stick->next;
			(reverse)->next = turtle;
		}
		(stick)->next = reverse;
		*begin_list = stick;
	}
}
