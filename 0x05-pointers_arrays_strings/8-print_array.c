#include "main.h"
#include <stdio.h>

/**
 * print_array - n elements of array to be printed
 * new line follows
 * @a: array that must be printed
 * @n: number of elements that must be printed
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		if (k == 0)
			printf("%i", a[k]);
		else
			printf(", %i", a[k]);
	}
		printf("\n");
}
