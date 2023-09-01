#include "main.h"

/**
* get_bit - Function returns value of a bit at given index
* @n: num integer to be operated on
* @index: The index
* Return: Return value of bit at index or -1 on error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	n >>= index;
	if ((n & 1) == 1)
		return (1);
	else
		return (0);

	return (-1);
}
