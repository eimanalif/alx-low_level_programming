#include"main.h"

/**
 *_puts - prints a string, followed by a new line, to stdout.
 *
 *Description: print an array of strings
 *@str: string to be printed
 *Return: always 0 (success)
 */


void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 48);
		str++;
	}
	_putchar('\n');
}
