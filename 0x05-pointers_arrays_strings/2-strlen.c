#include "main.h"
#include <stdio.h>

/**
 * _strlen - indicates length of a string
 * @s: string to look at
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
