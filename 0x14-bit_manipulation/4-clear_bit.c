#include "main.h"

/**
* clear_bit - function sets value of bit to 0 at index
* @n: indicates the number
* @index: indicates the index
* Return: returns 1 if Correct, -1 if failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	int x;

	if (index > 63)
		return (-1);

	x = 1 << index;

	*n = (*n & ~x);

	return (1);
}
