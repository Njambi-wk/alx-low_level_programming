#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer file input
 * @text_content: string to write file
 * Return: -1 if fails, 1 if success
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int wr = 0;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fd, text_content, len);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}
