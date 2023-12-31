#include "main.h"




/**
 *_strlen  - return string length
 *Description:returns length
 *@s: the string length to check
 *Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}


/**
 *append_text_to_file -  a function that appends
 *		text at the end of a file.
 *Description: a function that appends text at the end of a file.
 *@filename: is the name of the file
 *@text_content: is the NULL terminated string to
 *		add at the end of the file
 *Return:1 success -1 fail
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byt = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		byt = write(fd, text_content, len);
	close(fd);
	return (byt == len ? 1 : -1);
}
