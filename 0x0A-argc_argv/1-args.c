#include <stdio.h>
/**
 * main - Prints number of args
 * @argc:argument input
 * @argv: Argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
