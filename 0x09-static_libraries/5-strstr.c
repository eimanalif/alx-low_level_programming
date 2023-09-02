#include"main.h"

/**
 *_strstr - function that locates a substring.
 *
 *Description: function finds the first occurrence of the
 *		substring needle in the string haystack.
 *		The terminating null bytes (\0) are not compared
 *@needle:substring
 *@haystack:string
 *Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p1 = haystack;
		char *p2 = needle;

		while (*p1 == *p2 && *p2 != '\0')
		{
			p1++;
			p2++;
		}
			if (*p2 == '\0')
			{
				return (haystack);
			}
	}
	return (0);
}
