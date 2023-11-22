#include "main.h"

/**
 * is_prime_number - checks for prime number
 * @n: integer input
 * Retur: 1 if prime, 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_primenum(n, n - 1));
}

/**
 * actual_primenum - num input
 * @n: int input
 * @i: iterator
 * Return: 1 if prime, 0 if otherwise
 */
int actual_primenum(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_primenum(n, i -1));
}
