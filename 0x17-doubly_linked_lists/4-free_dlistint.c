#include"lists.h"



/**
 *free_dlistint - a function that frees a dlistint_t list.
 *Description:a function that frees a dlistint_t list.
 *@head:head pointer
 *Return: void
 */


void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
