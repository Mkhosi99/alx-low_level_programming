#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - Sum of all parameters is returned
 * @n: Number of parameters that is passed to the function
 * @...: Variable number of parameters to calculate the sum
 *
 * Return: If n == 0 - 0
 *         Otherwise - sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int index, sum = 0;

	va_start(ap, n);

	for (index = 0; index < n; index++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
