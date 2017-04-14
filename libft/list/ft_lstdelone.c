#include "list.h"
#include "dclist.h"

void	ft_dclstdelone(t_dclist **alst, void (*del)(void *, size_t))
{
	if (alst && *alst)
	{
		del((*alst)->data, (*alst)->data_size);
		free(*alst);
		*alst = NULL;
	}
}

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst && *alst)
	{
		del((*alst)->data, (*alst)->data_size);
		free(*alst);
		*alst = NULL;
	}
}
