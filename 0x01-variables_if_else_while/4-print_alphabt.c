#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char b;

	b = 'a';
	while (b <= 'z')
	{
		if (b != 'e' && b != 'q')
		{
			putchar(b);
		}
		b++;
	}
	putchar('\n');
	return (0);
}
