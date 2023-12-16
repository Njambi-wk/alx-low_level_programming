#include "main.h"
/**
 * flip_bits - counst the number of bits after flip
 * @n: number 1
 * @m: number 2
 * Return: int bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	int  countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			countbit++;
	}
	return (countbit);
}
