#include "main.h"

/**
 * char *_strcpy - entry point
 * @dest: char
 * @src: char
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0, x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
