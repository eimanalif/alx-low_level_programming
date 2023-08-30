#include "main.h"

/**
 *is_prime_number -  function that returns 1 if the input integer
 *		is a prime number, otherwise return 0.
 *
 *Description: function that returns 1 if the input integer is
 *		a prime number, otherwise return 0.
 *@n:intiger
 *Return:0 or 1
 */

int is_prime_number(int n)
{
	if ((n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0))
	{
		return (0);
	}
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
