#include <stdio.h>
#include <stdlib.h>
/**
 * main - print min coins change
 * @argc: argument count
 * @argv: argument vecor
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int cents;
	int coin_count;
	int i;
	int coins[] = {25, 10, 5, 2, 1};
	int change = sizeof(coins) / sizeof(coins[0]);

	if (argc != 2)
	{
		printf("error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coin_count = 0;

	for (i = 0; i < change; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			coin_count++;
		}
	}
	printf("%d\n", coin_count);
	return (0);
}
