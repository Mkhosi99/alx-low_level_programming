#include "main.h"

/**
* set_bit - Function sets value of a bit to 1 at given index
* @n: number that will be operated on
* @index: indicates index
* Return: return 1 if Success and -1 if error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	int x;

	if (index > 63)
		return (-1);

	x = 1 << index;

	*n = (*n & ~x) | (1 << index);

	return (1);
}
