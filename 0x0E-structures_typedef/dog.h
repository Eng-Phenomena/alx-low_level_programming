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
 * dog_st - definition of the struct dog
 */

typedef struct dog dog_st;

#endif
