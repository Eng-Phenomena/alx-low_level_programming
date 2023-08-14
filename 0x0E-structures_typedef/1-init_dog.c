#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - inistializes variable for dog object
 * @d: stuct pointer
 * @name: string
 * @age: num
 * @owner: string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
