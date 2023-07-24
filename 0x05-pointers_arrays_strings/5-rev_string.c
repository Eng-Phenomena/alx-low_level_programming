#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	char c = s[0];
	int tmp = 0;
	int i;

	while (s[tmp] != '\0')
	tmp++;
	for (i = 0; i < tmp; i++)
	{
		tmp--;
		c = s[i];
		s[i] = s[tmp];
		s[tmp] = c;
	}
}
