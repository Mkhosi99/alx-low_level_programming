#include "main.h"
#include <stdio.h>
/**
* set_bit - sets value of bit to 1 at given index
* @n: points to number to set bit
* @index: starts from 0
* Return: 1 if working or -1 if error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 - 1)
		return (-1);
	*n = *n | (1 << index);

	return (1);
}
