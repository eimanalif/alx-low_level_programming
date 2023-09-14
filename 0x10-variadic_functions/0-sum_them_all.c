#include<stdarg.h>
#include"variadic_functions.h"



/**
 *sum_them_all - a function that returns the sum of all its parameters.
 *Description:a function that returns the sum of all its parameters.
 *@n:number of arguments
 *Return:0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int result = 0;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
	int value = va_arg(args, int);

	result += value;
	}
	va_end(args);
	return (result);
}
