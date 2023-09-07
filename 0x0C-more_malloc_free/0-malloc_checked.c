#include"main.h"
#include<stdlib.h>

/**
 **malloc_checked - function that allocates memory using malloc
 *Description:function that allocates memory using malloc
 *@b:unsigned intiger number of bytes
 *Return:pointer
 */


void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
	free(ptr);
}
