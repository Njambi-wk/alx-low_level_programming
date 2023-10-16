#include "main.h"
/**
 * _puts - function that prints a string
 * @str: ponter to string
 * Return: strin & new line
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
