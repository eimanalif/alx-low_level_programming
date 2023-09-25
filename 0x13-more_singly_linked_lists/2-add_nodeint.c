#include"lists.h"




/**
 **add_nodeint - a function that adds a new node at
 *		the beginning of a listint_t list.
 *Description:a function that adds a new node at the
 *		beginning of a listint_t list.
 *@head:first node
 *@n:int
 *Return: pointer or NULL
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->next = *head;
	new_node->n = n;
	*head = new_node;
	return (new_node);
}
