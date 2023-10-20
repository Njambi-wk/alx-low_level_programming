#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: char 1 to compare
 * @s2: char 2 to compare
 * Return: always 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 > *s2) ? 1 : -1;
		}
		s1++;
		s2++;
	}
	return (0);
}
