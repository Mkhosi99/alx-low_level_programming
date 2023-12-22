#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - function creates a hash table.
 * @size: size of the hash table
 * Return: a pointer to the new hash table in memory
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x = 0;
	hash_table_t *newHsh_table = NULL;

	newHsh_table = malloc(sizeof(hash_table_t));
	if (!newHsh_table)
		return (NULL);
	newHsh_table->size = size;
	newHsh_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!newHsh_table->array)
	{
		free(newHsh_table);
		return (NULL);
	}
	for (; x < size; x++)
		(newHsh_table->array)[x] = NULL;
	return (newHsh_table);
}
