#include"main.h"

/**
 *_memset - function that fills memory with a constant byte.
 *
 *Defenition:function fills the first n bytes of the memory
 *		area pointed to by s with the constant byte b
 *@s:memory area
 *@n:number of bytes
 *@b:constant byte
 *
 *Return: pointer of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i =  0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
