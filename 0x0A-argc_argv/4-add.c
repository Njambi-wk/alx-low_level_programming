#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds tqo numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int num = 0;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("error\n");
				return (1);
			}
			num = num * 10 + (argv[i][j] - '0');
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
