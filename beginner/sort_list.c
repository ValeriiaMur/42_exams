#include "list.h"
#include <unistd.h>

t_list *sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *tmp;
	int		overflow;

	tmp = lst;
	while (lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			overflow = lst->data;
			lst->data = lst->next->data;
			lst->next->data = overflow;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}
