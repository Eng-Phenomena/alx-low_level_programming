#include "main.h"

/**
 * print_binary - printing in bin representation
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);

	if (n == 0)
		_putchar('0');
	while (n)
	{
		_putchar((n & mask)? '1' : '0' );
	       n = n >> 1;	
	}
}
