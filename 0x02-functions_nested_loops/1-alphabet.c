#include "main.h"

/**
 * print_alphabet - prints lowercase letters
 *
 * Return: void
 */

void print_alphabet(void)
{
	int i = 'a';

	for(i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
