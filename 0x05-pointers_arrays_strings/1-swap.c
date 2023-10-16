#include "main.h"
/**
 * swap_int - take two variables integers and swaps them
 * @a: swaps and stores address of b
 * @b: swaps and and stores address of a
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
