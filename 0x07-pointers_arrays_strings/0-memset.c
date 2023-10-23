#include "main.h"
/**
 * *_memset - function to fill memory with a constant byte
 * @*s: - memory area
 * @b: - constant byte
 * @n: integer
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
