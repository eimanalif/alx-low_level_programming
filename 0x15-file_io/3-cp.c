#include "main.h"



#define ERR_NOCLOSE "Error:Can't close fd %d\n"
#define USAGE "usage:cp file_from file_to\n"
#define ERR_NOREAD "Error:Can't read from file %s\n"
#define ERR_NOWRITE "Error:Can't write to %s\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)





/**
 *main - program
 *@ac: arg. count
 *@av: arg. vector
 *Return:1 success 0 fail
 */


int main(int ac, char **av)
{
	int frm_fd = 0, to_fd = 0;
	ssize_t b;
	char buf[READ_BUFFER_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	frm_fd = open(av[1], O_RDONLY);

	if (frm_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);

	if (to_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((b = read(frm_fd, buf, READ_BUFFER_SIZE)) > 0)
		if (write(to_fd, buf, b) != b)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	if (b == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	frm_fd = close(frm_fd);
	to_fd = close(to_fd);


	if (frm_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, frm_fd), exit(100);
	if (to_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, frm_fd), exit(100);

	return (EXIT_SUCCESS);
}
