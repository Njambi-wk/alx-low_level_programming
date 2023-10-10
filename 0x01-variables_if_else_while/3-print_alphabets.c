#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char B = 'A';
	char b = 'a';

	while (B <= 'Z')
	{
		putchar(B);
		B++;
	}
	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
