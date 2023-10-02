#include "main.h"





/**
 *read_textfile - a function that reads a text file and
 *		prints it to the POSIX standard output.
 *Description:a function that reads a text file and prints
 *		it to the POSIX standard output.
 *@filename:file name
 *@letters: is the number of letters it should read and print
 *Return:0 or NULL
 */



ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t i;
	char buf[READ_BUFFER_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	i = read(fd, &buf[0], letters);
	i = write(STDOUT_FILENO, &buf[0], i);

	close(fd);
	return (i);
}
