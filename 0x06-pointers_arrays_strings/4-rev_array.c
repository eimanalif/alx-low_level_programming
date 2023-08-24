#include"main.h"

/**
 *reverse_array - function that reverses the content of an array of integers
 *
 *Description:function that reverses the content of an array of integers.
 *@a: array of integers
 *@n:numbers of elemnets of the array
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int l;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		l = a[i];
		a[i] = a[j];
		a[j] = l;
	}
}
