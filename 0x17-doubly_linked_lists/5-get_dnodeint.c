#include"lists.h"



/**
 *get_dnodeint_at_index- a function that returns the
 *			nth node of a dlistint_t linked list.
 *Description:a function that returns the nth node of a dlistint_t linked list.
 *@head:pointer
 *@index:index of node
 *Return:pointer
 */



dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
