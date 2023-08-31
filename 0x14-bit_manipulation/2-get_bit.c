#include "main.h"

/**
 * get_bit - returns the value of a bit at an index
 * @n: searching number
 * @index: index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
