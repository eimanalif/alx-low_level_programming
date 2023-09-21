#include"lists.h"
#include<stdio.h>
#include<stdlib.h>



/**
 **add_node - a function that adds a new node
 *		at the beginning of a list_t list.
 *Description:a function that adds a new node at
 *		the beginning of a list_t list.
 *@head:first node pointer
 *@str:first node string
 *Return:a pointer
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!head || !new_node)
		return (NULL);
	if (str)
	{
		new_node->str = strdup(str);

		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);

}
