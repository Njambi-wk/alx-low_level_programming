#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: string  to print
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int i, j;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		char temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
