#include "main.h"
/**
 * _sqrt_recursion - natural sqrt of a number
 * @n: number input
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (natural_sqrt(n, 0));
}

/**
 * natural_sqrt - natural sqrt of a number
 * @n: integer input
 * @i: iterator
 * Return: the sqrt integer
 */
int natural_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (natural_sqrt(n, i + 1));
}
