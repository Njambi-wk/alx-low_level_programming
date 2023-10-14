#include <stdio.h>
/**
 * main - entry
 * Return: always 0
 */
int main(void)
{
	int n = 50;
	int i;
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;
	unsigned long next;

	printf("%lu, %lu, ", fib1, fib2);
	for (i = 3; i <= n; i++)
	{
		next = fib1 + fib2;
		if (i == n)
		{
			printf("%lu\n", next);
		}
		else
		{
			printf("%lu, ", next);
		}
		fib1 = fib2;
		fib2 = next;
	}
	return (0);
}

