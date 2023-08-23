#include"main.h"

/**
 *_strncpy - function that copy
 *
 *Description: function to copy string to another 
 *
 *@dest,@src arrays
 *@n, number of byts to copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{

		dest[i] = src[i];
	}
	while (i < n)
	{	dest[i] = ('\0');
		i++;
	}

	return (dest);
}	 
