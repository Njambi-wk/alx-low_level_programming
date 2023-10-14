#include "main.h"
/**
 * print_numbers - prints numbers
 * Return: always 0
 */
void print_numbers(void)
{
	char j = '0';

	while (j <= '9')
	{
		_putchar(j);
		j++;
	}
	_putchar('\n');
}
