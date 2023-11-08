#include <stdio.h>
#include <stdlib.h>
/**
 * Main - function that  Prints its name
 * @argc: Number of arguments
 * @argv: Array size
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}
