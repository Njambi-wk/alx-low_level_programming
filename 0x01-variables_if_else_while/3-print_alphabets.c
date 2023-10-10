#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char b = 'a';
	char B = 'A';

	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	while (B <= 'z')
	{
		putchar(B);
		B++;
	}
	putchar('\n');
	return (0);
}
