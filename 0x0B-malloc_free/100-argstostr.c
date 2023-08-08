#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenate all arguments of the program wit a newline
 * @ac: argument count
 * @av: double pointer to array of strings
 * Return: Null if error, else return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *a, *retptr;
	int x, j, sum;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0, sum = 0; x < ac; x++)
	{
		for (j = 0; *(*(av + x) + j) != '\0'; j++, sum++)
			;
		sum++;
	}
	sum++;

	a = malloc(sum * sizeof(char));
	if (a == NULL)
		return (NULL);

	retptr = a;
	for (x = 0; x < ac; x++)
	{
		for (j = 0; av[x][j] != '\0'; j++)
		{
			*a = av[x][j];
			a++;
		}
		*a = '\n';
		a++;
	}

	return (retptr);
}
