#include "list.h"
#include "dclist.h"

void	ft_dclstiter(t_dclist *lst, void (*f)(t_dclist *elem))
{
	t_dclist	*stop;

	if ((stop = lst))
	{
		f(lst);
		lst = lst->next;
	}
	while (lst != stop)
	{
		f(lst);
		lst = lst->next;
	}
}

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}
