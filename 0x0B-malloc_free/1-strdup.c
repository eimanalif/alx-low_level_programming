#include"main.h"
#include<stdlib.h>
#include<stdio.h>


/**
 **_strdup -  function that returns a pointer to a newly allocated space in
 *		memory, which contains a copy of the string given as a parameter.
 *Definition: function that returns a pointer to a newly allocated space in
 *		memory, which contains a copy of the string given as a parameter.
 *@str:string
 *
 *Return:pointer or null
 *
 */

char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *str2;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
	;
	str2 = malloc(size * sizeof(*str) + 1);
	if (str2 == 0)
	{
		return (NULL);
	}
	for (; i < size; i++)
	{
		str2[i] = str[i];
	}
	return (str2);
}
