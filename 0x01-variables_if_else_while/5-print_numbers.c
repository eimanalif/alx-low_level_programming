#include<stdio.h>

/**
 * main -Entry point
 *
 * Description: 0-9 digit print
 *
 * Return: always 0 (sucess)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)

	{
		printf("%i", digit);
		digit++;
	}
	print("\n");

	return (0);
}
