#include"main.h"

/**
 *_strcat - function that concatenates two strings
 *Description:function appends the src string to the dest string, overwriting
 *	the terminating null byte (\0) at the end of dest,
 *	and then adds a terminating null byte
 *@dest:old string array to appand to
 *@src:new string to appand to old string
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int r;

	i = 0;

	while (dest[i])
		i++;

	for (r = 0; src[r]; r++)
	{
	dest[i++]  = src[r];
	}

	return (dest);
}
