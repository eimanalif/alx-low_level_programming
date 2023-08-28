#include"main.h"

/**
 *_memcpy -  a function that copies memory area.
 *
 *Description: function copies n bytes from memory area src to memory area dest
 *@n:bytesfrom memory area
 *@src:memry area
 *@dest:memory area to copy to
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
