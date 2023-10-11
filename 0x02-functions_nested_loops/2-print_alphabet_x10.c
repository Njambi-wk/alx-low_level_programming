#include "main.h"
/**
 * main - Entry point alphabets x10
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char b = 'a';
	int i = 0;

	while (i < 10)
	{
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		i++;
		b = 'a';
	}
}
