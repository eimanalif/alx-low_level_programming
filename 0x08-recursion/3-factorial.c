#include"main.h"

/**
 *factorial -  function that returns the factorial of a given number.
 *Description -  function that returns the factorial of a given number.
 *@n: number to get factorial for
 *Return: -1 if n is negative, 1 if n = 0, else fectorial n
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
