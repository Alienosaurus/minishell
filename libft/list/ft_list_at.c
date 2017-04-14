#include "list.h"
#include "dclist.h"

t_dclist	*ft_dclist_at(t_dclist *begin_list, unsigned int nbr)
{
	if (nbr > 0 && begin_list)
		return (ft_dclist_at((begin_list)->next, nbr - 1));
	return (begin_list);
}

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (nbr > 0 && begin_list)
		return (ft_list_at((begin_list)->next, nbr - 1));
	return (begin_list);
}
