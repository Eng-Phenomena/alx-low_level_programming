#include <stdlib.h>
#include "main.h"

/**
 * _strdup - string dublicate
 * @str: string
 * Return: string pointer
 */

char *_strdup(char *str)
{
	char *arr;
	unsigned int i = 0, count = 0;

	if (str == NULL)
                return (NULL);

	while (str[count] != '\0')
		count++;
	arr = (char *)malloc(sizeof(char) * (count + 1));

	if (arr == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}
	return (arr);
}
