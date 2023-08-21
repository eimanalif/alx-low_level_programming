#include"main.h"

/**
 *main - a function that swaps the values of two integers.
 *
 *Description: swap a value to b value VS 
 *
 *Retarn: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int *ptr1;
	int *ptr2;

	*ptr1 = a;
	*ptr2 = b;
	swap_int (&a, &b);

	return (0);
}
