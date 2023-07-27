#include "main.h"
#include <stdio.h>
/**
 * reverse_array - outputs reverse array.
 * @a: array that must be compared
 * @n: size of array.
 * Return: The reversed array
 */
void reverse_array(int *a, int n)
{
	int swap, start, end;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		swap = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = swap;
		start++;
		end--;
	}
}
