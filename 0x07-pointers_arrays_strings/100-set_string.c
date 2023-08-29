#include"main.h"

/**
 *set_string - function that sets the value of a pointer to a char.
 *Description:function that sets the value of a pointer to a char.
 *@s:pointer to pointer
 *@to:pointer
 *Return: value  of string
 */

void set_string(char **s, char *to)
{
	*s = to;
}
