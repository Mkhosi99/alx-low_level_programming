#include "hash_tables.h"

/**
 * hash_table_set - Functin will add or update element in a hash table
 * @ht: Points to the hash table.
 * @key: The key to add and cannot be an empty string
 * @value: The value linked with the key
 *
 * Return: 0 if failure
 *         Or 1 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNde;
	char *val_cp;
	unsigned long int idx, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_cp = strdup(value);
	if (val_cp == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (x = idx; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = val_cp;
			return (1);
		}
	}

	newNde = malloc(sizeof(hash_node_t));
	if (newNde == NULL)
	{
		free(val_cp);
		return (0);
	}
	newNde->key = strdup(key);
	if (newNde->key == NULL)
	{
		free(newNde);
		return (0);
	}
	newNde->value = val_cp;
	newNde->next = ht->array[idx];
	ht->array[idx] = newNde;

	return (1);
}
