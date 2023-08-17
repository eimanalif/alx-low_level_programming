#include<stdio.h>
#include"main.h"

/**
 *main- a function that checks for uppercase character
 * _isupper - uppercase letters
 * Descreption: checks for uppercase character
 *@c:char to check
 *Return: 1 if c=A-Z ,0 if else
 */

int _isupper(int c)

	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
