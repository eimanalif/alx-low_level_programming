#include"main.h"

/**
 *rot13 -  function that encodes a string using rot13.
 *Description: function that encodes a string changing letters 13 letter ahead
 *@str: string to code
 *Return: str
 */

char *rot13(char *str)
{
	int i;

	char rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr = str;

	while (*str)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*str == rot13[i])
			{
				*str = ROT13[i];
					break;
			}
		}
		str++;
	}
	return(ptr);
}
