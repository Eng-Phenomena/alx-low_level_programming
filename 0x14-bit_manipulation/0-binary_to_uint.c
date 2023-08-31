#include "main.h"

/**
 * binary_to_uint - converting binary num to decimal
 * @b: binary num
 * Return: decimal value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int d = 0, count = 0;
	unsigned int base = 1;

	if (!b)
		return (0);

	while (b[count])
		count++;

	for (; count >= 0; count--)
	{
		if (b[count] < '0' || b[count] > '1')
			return (0);

		if (b[count] == '1')
			d += base;
		base *= 2;
	}
	return (d);
}
