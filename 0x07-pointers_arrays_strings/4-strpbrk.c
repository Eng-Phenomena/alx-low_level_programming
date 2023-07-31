#include "main.h"
/**
 * _strpbrk - searches for string 
 * @s: char pointer
 * @accept: char pointer
 * Return: 0 
 */
char *_strpbrk(char *s, char *accept)
{
		int i = 0;

		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
		s++;
		}

	return ('\0');
}
