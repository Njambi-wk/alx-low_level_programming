#include "main.h"
/**
 * is_palindrome - checks for an empty string
 * @s: string input
 * Return: 1 if palindrome, 0 if otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

#include "main.h"
/**
 * _strlen_recursion - length of a string
 * @s: the string
 * Return: always 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks if string is palindrome
 * @s: string
 * @i: iterator
 * @len: string length
 * Return: 1 if success, 0 if not palindrome
 */
int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));
}
