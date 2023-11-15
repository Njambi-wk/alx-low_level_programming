#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - poppys info
 * @name: name of the poppy
 * @age: poppys age
 * @owner: poppys owner
 *
 * description - struct dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
