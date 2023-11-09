#include "lists.h"



/**
 *add_dnodeint_end - function that adds a new node at
 *			the end of a dlistint_t list
 *Description:function that adds a new node at the end of a dlistint_t list.
 *@head:head pointer
 *@n:int
 *Return: pointer
 */



dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *node;

	if (!head || !new_node)
		return (new_node ? free(new_node), NULL : NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		node = *head;
		while (node->next)
			node = node->next;

		node->next = new_node;
		new_node->prev = node;
	}
	return (new_node);
}
