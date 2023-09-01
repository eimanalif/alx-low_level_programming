#include<stdlib.h>
#include<stdio.h>
#include"main.h"


/**
 *main -  program that prints its name, followed by a new line.
 *Description: program that prints its name, followed by a new line.
 *@argc:count of arrguments
 *@argv:vector of arrgument
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc != 3)
	{
		printf("erorr");
		printf("\n");
		return (1);
	}
	if (argc == 3)
	{
		sum += atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", sum);

	return (0);
}
