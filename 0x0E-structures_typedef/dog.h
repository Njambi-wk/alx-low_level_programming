#ifndef DOG_H
#define DOG_H
/**
 * struct dog - poppys info
 * @name: name of the poppy
 * @age: poppys age
 * @owner: poppys owner
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
