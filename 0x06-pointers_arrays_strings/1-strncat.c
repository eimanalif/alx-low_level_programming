#include"main.h"
/**
 *_strncat -  function that concatenates two strings.
 *
 *Descreption:  function that concatenates two strings
 *		will use at most n bytes from src; and
 *		src does not need to be null-terminated
 *		if it contains n or more bytes
 *@dest:string array
 *@src:string array
 *@n:number of limited bytes
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int r;

	i = 0;

	while (dest[i])
		i++;
	for (r = 0; r < n && src[r] != '\0'; r++)
	{

		dest[i++] = src[r];

	}
	return (dest);
}
