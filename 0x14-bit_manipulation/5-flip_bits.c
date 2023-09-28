#include"main.h"



/**
 *flip_bits - a function that returns the number
 *		of bits you would need to flip to get
 *		from one number to another.
 *Description:a function that returns the number of bits you
 *		would need to flip to get from one number to another.
 *@n:first number
 *@m:second number
 *Return: int
 */



unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int sum = 0;

	while (xorval)
	{
		if (xorval & 1ul)
			sum++;
		xorval = xorval >> 1;
	}
	return (sum);
}
