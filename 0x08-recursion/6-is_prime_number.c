#include "main.h"

int prime_number(int n, int i);
/**
* is_prime_number - function checks input for prime number
* @n: number to be checked
* Return: return 1 for prime interger, return 0 otherwise
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_number(n, n - 1));
}

/**
* prime_number - function checks prime number using recursion
* @n: number to be checked
* @i: variable used to iterate
* Return: return 1 if number is prime and 0 otherwise
*/
int prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}

	return (prime_number(n, i - 1));
}
