#include"lists.h"



/**
 *dlistint_len - return length
 *Description:a function that return length
 *@h: head pointer
 *Return: size of list
 */



size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
