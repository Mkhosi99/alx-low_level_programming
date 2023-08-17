#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Sum of two intergers is returned
 * @a: The first interger
 * @b: The second interger
 *
 * Return: Sum of interger a and interger b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_mul - Product of two intergers is returned
 * @a: First interger
 * @b: Second interger
 *
 * Return: Product of interger a and interger b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two intergers
 * @a: The first interger
 * @b: The second interger
 *
 * Return: Quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns remainder of two numbers when divided
 * @a: First interger
 * @b: Second interger
 *
 * Return: Remainder of the division of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

/**
 * op_sub - Difference of two intergers is returned
 * @a: The first interger
 * @b: The second interger
 *
 * Return: Difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}
