#include "main.h"

/**
 * _strlen - lenght of string
 * @s: char pointer
 * Return: lenght
 */

int _strlen(char *s)
{
	int i = 0;

	for (i = 0; *s != '\0'; i++)
		s++;

	return (i);
		
}
