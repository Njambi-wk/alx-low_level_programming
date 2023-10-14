#include <stdio.h>
/**
 * main - prints sum of all multiples of 3 and 5 upto 1024
 * Return: always (success)
 */
int main(void)
{
	int limit = 1024;
	int j = 0;
	int i;

	for (i = 0; i < limit; i++)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	j += i;
	}
	}
	printf("%d\n", j);
	return (0);
}
