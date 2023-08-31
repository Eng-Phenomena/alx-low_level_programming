#include "main.h"

/**
 * get_endianness - if a machine is little or big endian
 * Return: checking if machine big or little by 0 or 1 res
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *check = (char *) &i;

	return (*check);
}
