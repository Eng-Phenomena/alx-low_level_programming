#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatinating 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: Char pointer
 */

char *str_concat(char *s1, char *s2)
{
	int count1 = 0, count2 = 0, i = 0;
	int sum = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[count1] != '\0')
		count1++;
	while (s2[count2] != '\0')
		count2++;
	sum = count1 + count2;
	str = (char*) malloc(sizeof(char) * (sum + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < count1; i++)
		str[i] = s1[i];

	for (i = 0; i < count2; i++)
		str[i + count1] = s2[i];
	str[sum] = '\0';

	return (str);
}
