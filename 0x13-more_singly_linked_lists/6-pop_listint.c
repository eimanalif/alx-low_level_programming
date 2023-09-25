#include"lists.h"


/**
 *pop_listint - a function that deletes the head node of a listint_t
 *		linked list, and returns the head node’s data (n).
 *Description:a function that deletes the head node of a listint_t
 *		linked list, and returns the head node’s data (n).
 *@head:first node
 *Return:n
 */





int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (head)
	{
		node = *head;
		node = node->next;
		n = node->n;
		return (n);
	}
	free(head);
	return (0);
}
