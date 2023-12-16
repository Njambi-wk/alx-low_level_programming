#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets bit value to 0 at given index
 * @n: parameter input
 * @index: index input
 * Return: 1 if success, -1 if otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
