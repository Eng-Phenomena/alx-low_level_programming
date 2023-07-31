#include "main.h"

/**
 * _memcpy - copies n byte fro src to dest
 * @dest: char pointer
 * @src: char pointer
 * @n: int
 * Return: char pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}	

	return (dest);
}
