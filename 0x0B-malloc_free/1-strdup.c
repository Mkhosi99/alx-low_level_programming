#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate string using malloc
 * @str: string to duplicate
 * Return: Pointer to new duplicated string
 */

char *_strdup(char *str)
{
	char *a;
	int x, j;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		;

	a = malloc(x * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (j = 0; j < x; j++)
		a[j] = str[j];
	a[j] = '\0';

	return (a);
}
