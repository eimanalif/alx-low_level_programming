#include"3-calc.h"
#include<stdio.h>

/**
 *get_op_func -  function to perform the operation asked by the user.
 *		You’re not allowed to declare any other function.
 *Description: function to perform the operation asked by the user
 *		You’re not allowed to declare any other function.
 *@s:string
 *Return:int
 */




int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s && s[i] == ops[i].op[0] && !s[1])
			return (ops[i].f);
	}
	return (NULL);
}
