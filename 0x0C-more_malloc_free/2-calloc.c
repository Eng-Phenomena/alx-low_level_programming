#include <stdlib.h>
#include "main.h"

/**
 * _calloc - specific size array
 * @nmemb: repeated elements
 * @size: size of arr
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(size * nmemb);
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = 0;

	return (ptr);
}
