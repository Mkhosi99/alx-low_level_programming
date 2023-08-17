#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Outputs numbers
 * @seperator: String to outputted between numbers
 * @n: Numbers of intergers passed to the function
 * @...: Variable number of numbers to be outputted
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;

		va_start(ap, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ap, int));

		if (x != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}

	printf("\n");

		va_end(ap);
}
