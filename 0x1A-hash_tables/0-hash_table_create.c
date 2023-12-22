#include "hash_tables.h"

/**
 * hash_table_create - function will create a hash table
 * @size: indicates the size of the array
 *
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int x;

	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);
	h_table->size = size;
	h_table->array = malloc(size * sizeof(hash_node_t *));
	if (h_table->array == NULL)
	{
		free(h_table);
		return (NULL);
	}
	for (x = 0; x < size; x++)
		h_table->array[x] = NULL;
	return (h_table);
}
