#include "main.h"

/**
 * _strcat - concantes 2 strings
 * @dest: pointer char
 * @src: pointer char
 * Return: appended strings
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, count = 0;

	while (dest != '\0')
		dest++;

	for (i = 0; src != '\0'; i++)
	{
		*dest = src[i];
		dest++;
	}
	*dest = '\0';

	return (dest);
}
