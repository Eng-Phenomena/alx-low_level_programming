#include "main.h"

/**
 * set_bit - sets a bit to 1 for a given num
 * @n: pointer to num
 * @index: index to set
 * Return: 1 0r -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
