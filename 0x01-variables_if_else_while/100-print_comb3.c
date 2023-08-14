#include<stdio.h>

/**
 * main - entry point
 *
 * Description: 100-print_combo numbers
 *
 * Return: always 0 (success)
 *
 */

int main(void)

	int (n = 0, j);

	while (n <= 9)
	{
		j = 0;

			while (j <= 9)
			{
				if (n != j && n < j)
				{
					putchar(n + 48);
					putchar(j + 48);

					if (n + j != 17)
					{
						putchar(',');
						putchar(' ');
					}
				}
				j++;
			}
			n++;
		}
		putchar('\n');

		return (0);
}
