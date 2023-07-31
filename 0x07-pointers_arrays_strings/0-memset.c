#include "main.h"

/**
 * _memset - fills memory with const byte
 * @s: pointer
 * @b: char
 * @n: int 
 * Return: char pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
