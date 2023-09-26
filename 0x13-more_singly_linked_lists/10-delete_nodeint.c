#include"lists.h"



/**
 *delete_nodeint_at_index - a function that deletes the node at
 *		index index of a listint_t linked list.
 *Description:a function that deletes the node at index
 *		index of a listint_t linked list.
 *@index:is the index of the node that should be deleted
 *@head:pointer to first node
 *Return:1 or -1
 */




int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *pre;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	current = *head;

	while (current)
	{
		if (i == index)
		{
			pre->next = current->next;
			free(current);
			return (1);
		}
		i++;
		pre = current;
		current = current->next;
	}
	return (-1);
}


