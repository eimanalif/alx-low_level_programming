#include"main.h"
#include<stdio.h>

/**
 *_strlen - a function that returns the length of a string.
 *
 *Description: count string lengtH
 *
 *@s: string to check it's length
 *
 *Return: always 0 (success)
 */

int _strlen(char *s)

{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;

		return (count);
}
