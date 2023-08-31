#include "main.h"

/**
 * binary_to_uint - converting binary num to decimal
 * @b: binary num
 * Return: decimal value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int d = 0;
	int count = 0;

	if (!b)
		return (0);

	for (count = 0; b[count]; count++)
	{
		if (b[count] != '0' || b[count] != '1')
			return (0);
		d = 2 * d + (b[count] - '0');
	}
	return (d);
}
