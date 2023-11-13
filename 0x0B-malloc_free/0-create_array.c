#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates array of chars
 * @size: intege input
 * @c: chhar input
 * Return: always 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
