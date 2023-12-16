#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer input
 * @text_content: The string input
 * Return: 1 if success, -1 on fail or NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op = 0;
	int wr = 0;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
