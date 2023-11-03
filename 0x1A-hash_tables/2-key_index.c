#include "hash_tables.h"

/**
 * key_index - returning a random index number
 * @key: the string to generate random hash number
 * @size: size of the array
 * Return: the value of index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int num;

	num = hash_djb2(key);
	return (num % size);
}
