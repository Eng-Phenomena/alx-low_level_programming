#include "main.h"
/**
 * puts2 - function should print only even chars
 * @str: sring
 * Return: print
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
