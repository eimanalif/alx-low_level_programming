#include "main.h"









/**
 *_strlen - return length
 *Description: a function that returns the length of a string
 *@s: the string
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
 *create_file - a function that creates a file.
 *Description:a function that creates a file.
 *@filename: is the name of the file to create
 *@text_content: is a NULL terminated string to write to the file
 *Return:1 success -1 fail
 */





int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byt = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (len)
		byt = write(fd, text_content, len);
	close(fd);
	return (byt == len ? 1 : -1);
}
