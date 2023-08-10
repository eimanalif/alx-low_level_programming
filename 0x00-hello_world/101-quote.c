#include <unistd.h>

/**
 * main - entry point
 * Description:write function
 * Return: always 1 (success)
 */
int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar,

	     2015-10-19\n";

	write(2, quo, 59);

	return (1);
}
