#include"main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number input
 * @index: index input
 * Return: bit value, or -1 an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
