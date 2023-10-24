#include "main.h"
#include <stddef.h>
/**
 * _strspn - gets length of prefix substring
 * @s: input string
 * @accept: input
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value;

	value = 0;

	for (i = 0; s[i] != '\0'; n++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
		if (accept[n] == s[i])
		{
			value++;
			break;
		}
	}
		if (accept[n] == '\0')
		{
			break;
		}
	}
	return (value);
}
