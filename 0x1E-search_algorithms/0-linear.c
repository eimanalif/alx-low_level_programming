#include"search_algos.h"


/**
 * linear_search - a function that searches for a value in an
 * array of integers using the Linear search algorithm
 * Description:a function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array:pointer to first element of array
 * @size:number of elements in the array
 * @value:value to search for
 * Return:-1 or NULL
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);

			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
