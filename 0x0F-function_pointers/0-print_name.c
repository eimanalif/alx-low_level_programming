#include"function_pointers.h"



/**
 *print_name - a function that prints a name
 *Description:a function that prints a string of name
 *@name:name of a person
 *@f:pointer of a string called name
 *Return:void
 */



void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
