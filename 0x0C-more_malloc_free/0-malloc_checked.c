#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocating memory
 * @b: int
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p)
}
