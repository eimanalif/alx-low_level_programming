#include"function_pointers.h"


/**
 *int_index - a function that searches for an integer.
 *Description:a function that searches for an integer.
 *@array: array of intiger
 *@size: is the number of elements in the array
 *@cmp:is a pointer to the function to be used to compare values
 *Return:int
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
	{
		return (-1);
	}
	
