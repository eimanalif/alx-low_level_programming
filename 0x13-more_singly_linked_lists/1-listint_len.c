#include"lists.h"






/**
 *listint_len - a function that returns the number
 *		of elements in a linked listint_t list.
 *Description:a function that returns the number
 *		of elements in a linked listint_t list.
 *@h:head pointer
 *Return:number of elements
 */



size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

