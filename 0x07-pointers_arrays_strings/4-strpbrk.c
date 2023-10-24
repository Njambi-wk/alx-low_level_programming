#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches for first occurnce of a char
 * @s: string input
 * @accept: byte input
 * Return:always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return (NULL);
}
