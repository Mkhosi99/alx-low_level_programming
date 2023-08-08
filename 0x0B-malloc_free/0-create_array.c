#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars and initialize with specific char
 * @size: The size of array
 * @c: The specific char
 * Return: char pointer to malloc memory address, NULL if error
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int x;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		a[x] = c;

	return (a);
}
