#include "main.h"

/**
 * print_alphabet_x10 - aphabit but 10x
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 'a', j = 0;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
