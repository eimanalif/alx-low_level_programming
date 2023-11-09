#include"lists.h"



/**
 *insert_dnodeint_at_index - a function that inserts a
 *				new node at a given position.
 *Description:a function that inserts a new node at a given position.
 *@h: head pointer
 *@idx:index
 *@n:int
 *Return:pointer or NULL
 */



dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = *h, *node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		new = new->next;
		if (new == NULL)
			return (NULL);
	}

	if (new->next == NULL)
		return (add_dnodeint_end(h, n));

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);



	node->n = n;
	node->prev = new;
	node->next = new->next;
	new->next->prev = node;
	new->next = node;

	return (node);
}



