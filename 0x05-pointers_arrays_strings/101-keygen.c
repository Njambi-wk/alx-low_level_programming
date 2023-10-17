#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

/**
 * main - generate passwords for the program
 * Return: always 0
 */
int main(void)
{
	srand((unsigned int)time(NULL));

	char password[PASSWORD_LENGTH + 1];
	int i;

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		char random_char = rand() % 94 + 33;
		password[i] = random_char;
	}
	password[PASSWORD_LENGTH] = '\0';

	printf("password: %s\n", password);
	return (0);
}
