#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenate string
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j, x, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	a = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (a == NULL)
		return (NULL);

	for (x = 0, z = 0; x < (i + j + 1); x++)
	{
		if (x < i)
			a[x] = s1[x];
		else
			a[x] = s2[z++];
	}

	return (a);
}
