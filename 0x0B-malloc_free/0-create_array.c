#include<stdio.h>
#include"main.h"
#include<stdlib.h>

/**
 **create_array -  function that creates an array of chars,
 *		and initializes it with a specific char.
 *Definition:function that creates an array of chars
 *		,and initializes it with a specific char
 *@size:size of array to intialies
 *@c:char to start array with
 *
 *Return: NULL OR 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size  == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(size * sizeof(char));
	{
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;

	}
		return (arr);
	}
}
