#include "hash_tables.h"

/**
 * hash_table_delete - Function will delete a hash table
 * @ht: Points to a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *top = ht;
	hash_node_t *nde, *temp;
	unsigned long int x;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			nde = ht->array[x];
			while (nde != NULL)
			{
				temp = nde->next;
				free(nde->key);
				free(nde->value);
				free(nde);
				nde = temp;
			}
		}
	}
	free(top->array);
	free(top);
}
