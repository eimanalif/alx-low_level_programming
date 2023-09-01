#include<stdlib.h>
#include<stdio.h>
#include"main.h"


/**
 *main -  program that multiplies two numbers., followed by a new line.
 *Description: program that multiplies two numbers., followed by a new line.
 *@argc:count of arrguments
 *@argv:vector of arrgument
 *Return: 0 or 1 for error
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 3)
	{
		sum += atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", sum);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
