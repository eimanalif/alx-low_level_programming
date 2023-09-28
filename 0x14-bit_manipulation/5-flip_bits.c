#include"main.h"



/**
 *flip_bits - a function that returns the number
 *		of bits you would need to flip to get
 *		from one number to another.
 *Description:a function that returns the number of bits you
 *		would need to flip to get from one number to another.
 *@n:first number
 *@m:second number
 *Return: number of bits to flip
 */




unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int current;
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;
	int i = 0;

	for (i = 63; i >= 0; i--)
	{
		current = xorval >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
