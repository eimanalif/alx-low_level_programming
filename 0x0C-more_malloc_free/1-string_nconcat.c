#include"main.h"
#include<stdlib.h>
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
**string_nconcat - a function that concatenates two strings.
*Description:a function that concatenates two strings.
*@s1: string
*@s2:string to concatenates
*
*Return: pointer or NULL
*
 */ 
char *string_nconcat(char *s1, char *s2, unsigned int n)
 {
char *s3;
unsigned int len1, len2;
if (s1 == NULL)
{
s1 = "\0";
}
if (s2 == NULL)
{
s2 = "\0";
}
len1 = _strlen(s1);
len2 = _strlen(s2);
s3 = malloc(n * sizeof(char) + 1);
if (s3 == 0)
{
return (0);
}
for (n = 0; n < len1 + len2 ; n++)
{
if (n < len1)
s3[n] = s1[n];
else
s3[n] = *s1 + s2[n];
}
s3[n] = '\0';
return (s3);
}

