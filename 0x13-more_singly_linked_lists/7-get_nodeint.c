#include"lists.h"



/**
 **get_nodeint_at_index - a function that returns the
 *		nth node of a listint_t linked list.
 *Description:a function that returns the nth
 *		node of a listint_t linked list.
 *@index:is index of node starting at 0
 *@head:is first node
 *Return:NULL or 0
 */



listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;


	if (!head)
		return (NULL);

	node = head;

	for (n = 0; node && n < index; node = node->next, n++)

		;
		return (node);
}
