#include "hash_tables.h"

/**
 * hash_table_get - Function retrieves the value linked with
 *                  a key in a hash table
 * @ht: Points to the hash table
 * @key: The key where the value is needed
 *
 * Return: If key cannot be matched return NULL.
 *         Otherwise return value linked with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nde;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	nde = ht->array[idx];
	while (nde && strcmp(nde->key, key) != 0)
		nde = nde->next;

	return ((nde == NULL) ? NULL : nde->value);
}
