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
	(void)argc;
	printf("%s", argv[0]);
	printf("\n");
	return (0);
}
