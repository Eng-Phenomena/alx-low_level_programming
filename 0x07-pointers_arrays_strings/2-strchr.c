#include "main.h"

/**
 * _strchr - locates a chra in string
 * @s: string pointer
 * @c: char to be located
 * Return: pointe rto first occurance of c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if(*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
