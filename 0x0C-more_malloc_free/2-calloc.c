#include <stdlib.h>
#include "main.h"

char *setzero(char *ptr, unsigned int size);
/**
 * _calloc - specific size array
 * @nmemb: repeated elements
 * @size: size of arr
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(size * nmemb);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	setzero(ptr, size * nmemb);
	return (ptr);
}

/**
 * setzero - seting zeros
 * @ptr: pointer
 * @size: size
 * Return: char pointer
 */

char *setzero(char *ptr, unsigned int size)
{
	int i = 0;

	for (i = 0; i < size; i++)
		ptr[i] = '0';
	return (ptr);
}
