#include <stdio.h>
void tortoise(void) __attribute__((constructor));
/**
 * tortoise - prints before main
 * Return: always 0
 */
void tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
