#include"lists.h"



/**
 *print_dlistint -  a function that prints all the elements of a dlistint_t
 *Description: a function that prints all the elements of a dlistint_t
 *@h:head pointer
 *Return:size of list
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
