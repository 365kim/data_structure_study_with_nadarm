#include "list.h"

int	list_find(t_node *begin_list, int data)
{
	int i;

	if (begin_list == 0)
		return (-1);
	i = 0;
	while (begin_list)
	{
		if (begin_list->data == data)
			return (i);
		begin_list = begin_list->next;
		i++;
	}
	return (-1);
}
