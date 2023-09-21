#include"lists.h"



/**
 *list_len - a function that returns the number of elements in a linked list_t list.
 *Description:a function that returns the number of elements in a linked list_t list.
 *@h:pointer to first node
 *Return:the length of list_t
 */


size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
