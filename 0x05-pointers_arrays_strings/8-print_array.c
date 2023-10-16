#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array of integers then new line
 * @n: number of elements to be printes
 * @a: pointer
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
