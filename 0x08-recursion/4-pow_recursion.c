#include "main.h"

/**
* _pow_recursion - function returns value of x raised to y
* @x: base integer
* @y: exponent
*Return: returns x raised to y as interger
*/
int _pow_recursion(int x, int y)
{
	if (x == 1)
		return (1);
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
