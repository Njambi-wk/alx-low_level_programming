#include "main.h"
/**
 * reverse_array - reverses content of int arrays
 * @a: integer to reverse
 * @n: int 2 to reverse
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int strt = 0;
	int ending = n - 1;

	int temp;

	while (strt < ending)
	{
		temp = a[strt];

		a[strt] = a[ending];
		a[ending] = temp;

		strt++;
		ending--;
	}
}
