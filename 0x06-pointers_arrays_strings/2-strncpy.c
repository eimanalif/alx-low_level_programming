#include"main.h"

/**
 *_strncpy - function that copy
 *
 *Description: function to copy string to another
 *
 *@dest: first string
 *@src: second string
 *@n: number of letter to copy
 *
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] !='\0'; i++)
	{

		dest[i] = src[i];
	}
	while (i < n)
	{	dest[i] = ('\0');
		i++;
	}

	
	return (dest);
}
