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
	int i;
	int sum = 0;

	if (argc != 3)
	{
		printf("erorr");
		printf("\n");
		return (1);
	}
	if (argc == 3)
	for (i = 0; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum + 1);

	return (0);
}
