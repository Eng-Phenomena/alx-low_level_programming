#include "hash_tables.h"

/**
 * hash_table_create - creatimg a new hash table data structure
 * @size: the size of the array
 * Return: the pointer to a newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new_hash = malloc(sizeof(hash_table_t));

	if (!new_hash)
		return (NULL);

	new_hash->size = size;
	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (!(new_hash->array))
		return (NULL);
	else
	{
		for (i = 0; i < size; i++)
			new_hash->array[i] = NULL;
	}
}
