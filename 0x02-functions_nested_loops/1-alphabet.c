#include "main.h"
/**
 * main - print alphabets
 * Return: always 0
 */
int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		_putchar(b);
		b++;
	}
	_putchar('\n');
	return (0);
}
