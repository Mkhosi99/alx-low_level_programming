#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nde;
	unsigned long int x;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (flag == 1)
				printf(", ");

			nde = ht->array[x];
			while (nde != NULL)
			{
				printf("'%s': '%s'", nde->key, nde->value);
				nde = nde->next;
				if (nde != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
