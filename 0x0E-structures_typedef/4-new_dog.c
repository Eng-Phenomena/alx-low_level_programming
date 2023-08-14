#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - make a new dog object
 * @name: string
 * @age: float
 * @owner: string
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d = malloc(sizeof(struct dog));

	if (new_d == NULL)
		return (NULL);
	new_d -> name = name;
	new_d -> age = age;
	new_d -> owner = owner;
	return (new_d);
}
