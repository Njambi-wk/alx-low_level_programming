#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all parameters
 * @n: The number of parameters input
 * @...: variable input
 * Return: 0 if n = 0,otherwise sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int i, sum = 0;

	va_start(par, n);

	for (i = 0; i < n; i++)
		sum += va_arg(par, int);

	va_end(par);

	return (sum);
}

