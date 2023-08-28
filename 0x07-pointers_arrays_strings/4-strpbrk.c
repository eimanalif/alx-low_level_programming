#include"main.h"

/**
 *_strpbrk - a function that searches a string for any of a set of bytes.
 *Description:function locates the first occurrence in the
 *		string s of any of the bytes in the string accept
 *@s:string
 *@accept:second string
 *Return:a pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
			p = &s[i];
			return (p);
			}
		}
	}
	return (0);
}
