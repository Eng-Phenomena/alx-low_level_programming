#include "main.h"

/**
 * print_rev - reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	while (*s != '\0')
		s++;
	s--;

	while (*s != '\0')
		_putchar(*s--);
	_putchar('\n');

}
