#include "dog.h"

/**
 * init_dog - initializes a dog object
 * @d: pointer to struct dog 
 * @name: string
 * @age: num
 * @owner: string
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(stuct dog));
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
