#include "list.h"
#include "dclist.h"

void		ft_sorted_dclist_merge(t_dclist **begin1, t_dclist *begin2,
			int (*cmp)())
{
	t_dclist	*memo;

	if ((memo = begin2))
	{
		ft_sorted_dclist_insert(begin1, begin2, cmp);
		begin2 = begin2->next;
	}
	while (begin2 != memo)
	{
		ft_sorted_dclist_insert(begin1, begin2, cmp);
		begin2 = begin2->next;
	}
}

void		ft_sorted_list_merge(t_list **begin1, t_list *begin2, int (*cmp)())
{
	t_list	*memo;

	while (begin2)
	{
		memo = begin2->next;
		ft_sorted_list_insert(begin1, begin2, cmp);
		begin2 = memo;
	}
}
