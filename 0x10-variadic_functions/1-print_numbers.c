#include"variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>


/**
 *print_numbers - a function that prints numbers, followed by a new line.
 *Description:a function that prints numbers, followed by a new line.
 *@separator: is the string to be printed between numbers
 *@n: the number of integers passed to the function
 *@...:the integers to print
 *Return:void
 */




void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);

	while (i--)
		printf("%d%s", va_arg(ap, int),
		i ? (separator ? separator : "") : "\n");

	va_end(ap);
}
