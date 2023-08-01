#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to the constant
 * @b: constant
 * @n: maximum bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; n > 0; a++, n--)
	{
		s[a] = b;
	}

	return (s);
}
