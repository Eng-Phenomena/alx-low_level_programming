#ifndef STRUCT_1
#define STRUCT_1

/**
 * dog - dogs info
 * @name: string 
 * @age: float
 * @owner: string
 *
 * Description: blah blah dogs info
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - definition of the struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
