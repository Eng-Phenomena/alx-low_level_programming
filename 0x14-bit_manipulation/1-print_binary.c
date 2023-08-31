#include "main.h"

/**
 * print_binary - printing in bin representation
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	while (n)
	{
		_putchar((n & 1) + '0' );
	       n = n >> 1;	
	}
}
