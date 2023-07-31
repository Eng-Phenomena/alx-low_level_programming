#include "main.h"

/**
 * _strspn - length of prefix substring
 * @s: char pointer 
 * @acceprt char pointer
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i = 0;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if(*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
