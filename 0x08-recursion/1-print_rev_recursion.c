#include "main.h"
/**
 * _print_rev_recursion - prints in reverse
 * @s: character to print
 * Return: always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
