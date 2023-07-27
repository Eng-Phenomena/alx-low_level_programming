#include "main.h"

/**
 * leet - mozart
 * @c: char
 * Return: char pointer
 */

char *leet(char *c)
{
	int i, j;
	char letter[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	
	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == letter[j])
				c[i] = num[j];
		}
	}
	return (c);

}
