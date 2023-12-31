#include"lists.h"
#include<stdlib.h>


/**
 **add_nodeint_end -  a function that adds a new node
 *		at the end of a listint_t list.
 *Description: a function that adds a new node at the
 *		end of a listint_t list.
 *@n:intiger
 *@head:first node
 *Return:pointer or NULL
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;


	new_node = malloc(sizeof(listint_t));


	if (!head || !new_node)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;


	if (!*head)

		*head = new_node;
	else
	{
		current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}
		current->next = new_node;
	}
	return (new_node);

}
