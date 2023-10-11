#include "main.h"
/**
 * _isalpha - checks if character is an alphabet
 * @c: the character
 * Return: 1 if c is alphabet 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'Z' && c <= 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
