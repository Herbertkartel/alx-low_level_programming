#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array
 *
 * Return: The hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hashtable;

	if (size == 0)
		return (NULL);
	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		hashtable->array[i] = NULL;
	}
	return (hashtable);
}
