#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @size: size of aaray
 * @array: array input
 * @cmp: function pointers input
 * Return:...
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]) == 1)
		{
			return (n);
		}
	}
	return (-1);
}
