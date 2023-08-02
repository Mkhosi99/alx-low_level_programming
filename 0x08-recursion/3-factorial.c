#include "main.h"

/**
* factorial - function returns factorial of given number
* @n: number to be calculated
* Return: returns factorial of n as interger
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
