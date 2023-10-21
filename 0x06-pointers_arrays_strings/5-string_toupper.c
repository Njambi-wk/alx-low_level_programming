#include "main.h"
/**
 * *string_toupper - function to change owercase to uppercase
 * @n: string
 * Return: the modified string
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}
