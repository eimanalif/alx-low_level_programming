#include"main.h"

/**
*int _islower function
*
*Retutrn: returns 1 if 'c' is lowercase otherwise
*	alwas 0 (success)
*/

int _islower(int c)

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
