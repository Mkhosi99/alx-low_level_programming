#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Function creates a sorted hash table.
 * @size: Indicates size of new sorted hash table.
 *
 * Return: NULL if error occurs
 *         Otherwise a pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hsh_t;
	unsigned long int x;

	hsh_t = malloc(sizeof(shash_table_t));
	if (hsh_t == NULL)
		return (NULL);

	hsh_t->size = size;
	hsh_t->array = malloc(sizeof(shash_node_t *) * size);
	if (hsh_t->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		hsh_t->array[x] = NULL;
	hsh_t->shead = NULL;
	hsh_t->stail = NULL;

	return (hsh_t);
}

/**
 * shash_table_set - Function adds an element to a sorted hash table.
 * @ht: points to the sorted hash table.
 * @key: key to add and it cannot be an empty string.
 * @value: The value linked with key.
 *
 * Return: 0 if failure
 *         Otherwise return 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *newNde, *temp;
	char *val_cp;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_cp = strdup(value);
	if (val_cp == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = val_cp;
			return (1);
		}
		temp = temp->snext;
	}

	newNde = malloc(sizeof(shash_node_t));
	if (newNde == NULL)
	{
		free(val_cp);
		return (0);
	}
	newNde->key = strdup(key);
	if (newNde->key == NULL)
	{
		free(val_cp);
		free(newNde);
		return (0);
	}
	newNde->value = val_cp;
	newNde->next = ht->array[idx];
	ht->array[idx] = newNde;

	if (ht->shead == NULL)
	{
		newNde->sprev = NULL;
		newNde->snext = NULL;
		ht->shead = newNde;
		ht->stail = newNde;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		newNde->sprev = NULL;
		newNde->snext = ht->shead;
		ht->shead->sprev = newNde;
		ht->shead = newNde;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		newNde->sprev = temp;
		newNde->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = newNde;
		else
			temp->snext->sprev = newNde;
		temp->snext = newNde;
	}

	return (1);
}

/**
 * shash_table_get - Function retrieves the value linked with
 *                   a key in a sorted hash table
 * @ht: points to the sorted hash table.
 * @key: The key to get value of.
 *
 * Return: NULL if key cannot be matched
 *         Otherwise return the value linked with key in ht
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *nde;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	nde = ht->shead;
	while (nde != NULL && strcmp(nde->key, key) != 0)
		nde = nde->snext;

	return ((nde == NULL) ? NULL : nde->value);
}

/**
 * shash_table_print - function will print a sorted hash table in order
 * @ht: points to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *nde;

	if (ht == NULL)
		return;

	nde = ht->shead;
	printf("{");
	while (nde != NULL)
	{
		printf("'%s': '%s'", nde->key, nde->value);
		nde = nde->snext;
		if (nde != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Will print a sorted hash table in reverse order.
 * @ht: points to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *nde;

	if (ht == NULL)
		return;

	nde = ht->stail;
	printf("{");
	while (nde != NULL)
	{
		printf("'%s': '%s'", nde->key, nde->value);
		nde = nde->sprev;
		if (nde != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *top = ht;
	shash_node_t *nde, *temp;

	if (ht == NULL)
		return;

	nde = ht->shead;
	while (nde)
	{
		temp = nde->snext;
		free(nde->key);
		free(nde->value);
		free(nde);
		nde = temp;
	}

	free(top->array);
	free(top);
}
