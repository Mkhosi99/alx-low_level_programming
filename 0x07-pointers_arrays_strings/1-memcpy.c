#include <stdio.h>
#include "main.h"

/**
* _memcpy - function copies a memory area
* @dest: destination buffer
* @src: source buffer
* @n: area size
* Return: returns nothing
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
