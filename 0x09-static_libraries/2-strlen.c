#include "main.h"
/**
 * _strlen - checks the length of string
 * @s: string to be checked
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
