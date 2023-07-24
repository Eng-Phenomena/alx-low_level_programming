#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int tmp = 0, i = 0;

	while (*s != '\0')
	{
		tmp++;
		s++;
	}
	s--;

	char m[tmp];

	for (i = 0; i < tmp; i++)
	{
		m[i] = *s;
		s--;
	}

	s = m;

}
