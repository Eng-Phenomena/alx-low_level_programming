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
		_putchar(n & 0x01);
	       n >> 1;	
	}
}
