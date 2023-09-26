#include"lists.h"



/**
 **insert_nodeint_at_index - a function that
 *		inserts a new node at a given position.
 *Description:a function that inserts a new node at a given position.
 *@idx: is the index of the list where the new node should be added
 *@head:first node pointer
 *@n:number of node
 *Return:pointer or NULL
 */





listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;

	while (current)
	{
		if (i == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			new_node->n = n;

			return (new_node);
		}
	i++;
	current = current->next;
	}
	return (NULL);
}
