#include "main.h"

/**
 * flip_bits - num of bits changed to get to anothe rnum
 * @n: num1
 * @m: num2
 * Return: num
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		if (ex & 1)
			count++;
		ex >>= 1;
	}

	return (count);
}
