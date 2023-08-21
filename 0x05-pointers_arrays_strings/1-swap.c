#include<stdio.h>
#include"main.h"

/**
 *swap_int - a function that swaps the values of two integers
 *
 *Description: swap a value to b value VS
 *@a:int
 *@b:int
 *Retarn: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int pt;

	pt = *a;
	*a = *b;
	*b = pt;
}
