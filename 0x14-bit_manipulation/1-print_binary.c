#include "main.h"
#include <stdio.h>
/**
* print_binary - function will output binary representation of a number
* @n: represents numbers
* Return: 0 if working
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) + '0');
}
