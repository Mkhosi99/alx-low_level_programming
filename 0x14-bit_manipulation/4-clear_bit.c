#include "main.h"
#include <stdio.h>
/**
* clear_bit - sets bit to 0
* @n: number that will be set to 0
* @index: index at 0
* Return: 1 if working or -1 on error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
