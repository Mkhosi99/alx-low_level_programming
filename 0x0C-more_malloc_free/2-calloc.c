#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for array of a certain number
 * @nmemb: Number of elements
 * @size: Byte size of each array element
 *
 * Return: If nmemb = 0, size = 0, or function fails - NULL
 *         Otherwise - Point to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
