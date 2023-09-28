#include"main.h"



/**
 *binary_to_uint -  a function that converts a binary number to an unsigned int.
 *Description: a function that converts a binary number to an unsigned int.
 *@b: is pointing to a string of 0 and 1 chars
 *Return:converted number or 0
 */



unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		sum = sum * 2 + (*b++ - '0');
	}
	return (sum);
}
