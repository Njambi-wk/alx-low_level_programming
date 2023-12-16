#include "main.h"

/**
 * set_bit - sets the bit value to 1 at a given index.
 * @n: number input
 * @index: index input
 * Return: 1 if success, -1 if otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}

