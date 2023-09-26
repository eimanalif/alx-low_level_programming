#include"lists.h"




/**
 **reverse_listint - function that reverses a listint_t linked list.
 *Description: a function that reverses a listint_t linked list.
 *@head:pointer of first node
 *Return:pointer
 */




listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL, *next = NULL;

		current = *head;
		*head = NULL;

	while (current)
	{
		next = current->next;
		current->next = *head;
		*head = current;
		current = next;
	}
	return (*head);
}
