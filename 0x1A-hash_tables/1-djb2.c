#include "hash_tables.h"

/**
 * hash_djb2 - Function implements the djb2 algorithm
 * @str: The string to hash in table
 *
 * Return: Index in hash table
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int x;

	hash = 5381;
	while ((x = *str++))
		hash = ((hash << 5) + hash) + x; /* hash * 33 + c */

	return (hash);
}
