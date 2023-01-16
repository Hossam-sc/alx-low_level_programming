#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Entry point
 * @name: the name
 * @age: the age
 * @owner: the owner of the dog
 */
struct dog
{
	char *name;
	float *age;
	char *owner;
}
typedef dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
int _putchar(char c);
#endif
