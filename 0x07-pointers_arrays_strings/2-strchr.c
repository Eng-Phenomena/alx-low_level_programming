#include "main.h"

/**
 * _strchr - locates a chra in string
 * @s: string pointer
 * @c: char to be located
 * Return: pointe rto first occurance of c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if(s[i] == c)
		{
			return (&s[i]);
		}
		i++;

	}
	return (NULL);
}
