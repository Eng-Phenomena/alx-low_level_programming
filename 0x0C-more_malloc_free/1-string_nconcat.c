#include <stdlib.h>
#include "main.h"

int _strlen(char *s);
/**
 * string_nconcat - concatinating 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: num limit
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int count1, count2, tmp = 0, i = 0, j = 0;

	count1 = _strlen(s1);
	count2 = _strlen(s2);
	if (s1 == NULL)
		*s1 = "";
	if (s2 == NULL)
		*s2 = "";
	if (n > s2)
	{
		str = malloc(sizeof(char) * (count1 + count2));
		tmp = count1 + count2;
	}
	else
	{
		str = malloc(sizeof(char) * (count1 + n));
		tmp = count1 + n;
	}
	if (str == NULL)
		return (NULL);

	for (i = 0; i < tmp; i++)
	{
		if (s1[i] != '\0')
		{
			str[i] = s1[i];
		}
		else
		{
			str[i] = s2[j];
			j++;
		}
	}

	return (str);
}

/**
 * _strlen - counts the string letters
 * @s: string
 * Return: num
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}
