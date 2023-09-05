#include"main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 *_strlen - find length of a string
 *@s:string
 *Return:size
 *
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}



/**
 **str_concat - a function that concatenates two strings.
 *Description:a function that concatenates two strings.
 *@s1: string
 *@s2:string to concatenates
 *
 *Return: pointer or NULL
 *
 */

char *str_concat(char *s1, char *s2)
{

	char *s3;
	int n;
	int len1, len2;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	s3 = malloc((len1 + len2) * sizeof(char) + 1);

	if (s3 == 0)
	{
		return (0);
	}
	for (n = 0; n < len1 + len2 ; n++)
	{
		if (n < len1)
			s3[n] = s1[n];
	else
			s3[n] = s2[n - len1];
	}
	s3[n] = '\0';
		return (s3);
}
