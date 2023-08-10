#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Memory is allocated using malloc
 * @b: Number of bytes that must allocated 
 *
 * Return: Pointer to the memory alloctated
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
