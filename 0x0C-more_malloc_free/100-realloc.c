#include"main.h"
#include<stdlib.h>


/**
 **_realloc -  function that reallocates a memory
 *		block using malloc and free
 *Defintion: function that reallocates a memory block
 *		using malloc and free
 *@ptr:pointer to the memory previously allocated with a call to malloc---
 *@old_size:is the size, in bytes, of the allocated space for ptr
 *@new_size:the new size, in bytes of the new memory block
 *
 *Return:pointer
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *p;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		return (NULL);
		free(ptr);
	}

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);

	return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		for (i = 0; i < old_size && i < new_size; i++)
		*((char *)p + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (p);
}
