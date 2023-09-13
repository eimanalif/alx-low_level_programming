#include"function_pointers.h"



/**
 *print_name:a function that prints a name
 *Description:a function that prints a name
 *@name:name of a person
 *Return:void
 */



void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
