#include"function_pointers.h"


/**
 *array_iterator -  a function that executes a function
 *		given as a parameter on each element of an array.
 *Description: a function that executes a function given
 *		as a parameter on each element of an array.
 *@array:array of intigers
 *@size: is the size of the array
 *@action: a pointer to the function you need to use
 *Return:void
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		action((array[i]));
	}
}
