#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that reads a text file and
 * prints it to the POSIX standard output..
 * @filename: file input
 * @letters:letters input
 * Return: write-actual number of letters it could read and print
 *        0 when function fails or  NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t j;
	ssize_t k;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	k = read(fd, buf, letters);
	j = write(STDOUT_FILENO, buf, k);

	free(buf);
	close(fd);
	return (j);
}

