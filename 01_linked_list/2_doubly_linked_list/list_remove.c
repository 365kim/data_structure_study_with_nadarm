#include "list.h"

int	list_remove(t_linked_list *list, int n)
{
	t_node	*curr;

	if (list == 0 || n < 0 || n >= (int)list->size || (curr = list_get(list, n)) == 0)
		return (0);
	if (curr->prev == 0 || n == 0)
	{
		list->head = curr->next;
		if (curr->next)
			(curr->next)->prev = 0;
	}
	if (curr->next == 0 || n == (int)list->size)
	{
		list->tail = curr->prev;
		if (curr->prev)
			(curr->prev)->next = 0;
	}
	if (curr->next && curr->prev)
	{
		(curr->next)->prev = curr->prev;
		(curr->prev)->next = curr->next;
	}
	list->size--;
	free(curr);
	return (1);
}

/*
** line 21 : else    >>>   if (curr->next && curr->prev)
*/
