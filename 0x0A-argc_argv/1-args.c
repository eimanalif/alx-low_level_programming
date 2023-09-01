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
		printf("%d", argc - 1);
		printf("\n");
		(void)argv;
	return (0);
}
