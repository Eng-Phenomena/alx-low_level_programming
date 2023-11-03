#include "hash_tables.h"

/**
 * hash_table_get - retrieving  the value of key
 * @ht: hash table
 * @key: hey to be searched
 * Return: value of key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp = NULL;

	index = key_index(key);

	if (!(ht->array[index]))
		return (NULL);
	else
	{
		tmp = ht->array[index];
		if (!strcmp(ht->tmp->key, key))
		{
			return (ht->tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
