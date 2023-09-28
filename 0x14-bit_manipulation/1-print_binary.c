#include"main.h"


/**
 *print_binary -  a function that prints the binary
 *		representation of a number.
 *Description: a function that prints the binary representation of a number.
 *@n:number to print
 *Return:void
 */



void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, printed = 0;



	while (bit)
	{
		if (n & 1l << --bit)
		{
			_putchar('l');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
