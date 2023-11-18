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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
