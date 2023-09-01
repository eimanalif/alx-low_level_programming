#include<stdio.h>
#include"main.h"
#include<stdlib.h>

/**
 *main -  program that adds positive numbers.
 *
 *Description:  program that adds positive numbers.
 *@argc:count of argumment
 *@argv:vegtor of array of argumment
 *Return: 0 success, 1 fail
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
			{
				printf("Error");
				return (1);
			}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
