#include "main.h"

int sqrt_function(int n, int i);

/**
* _sqrt_recursion - function returns square root of a number
* @n: number to be assesed
* Return: returns square root of n as interger
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_function(n, 0));
}

/**
 * sqrt_function - recurses to find natural square root
 * @n: number to calculate the sqaure root
 * @i: iterator
 *
 * Return: result of square root
 */
int sqrt_function(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_function(n, i + 1));
}
