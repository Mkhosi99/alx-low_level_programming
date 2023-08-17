#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Outputs a char.
 * @arg: Arguments pointing to char to be outputted
 */

void print_char(va_list arg)
{
	char myLetter;

	myLetter = va_arg(arg, int);
	printf("%c", myLetter);
}

/**
 * print_int - Outputs an int
 * @arg: Arguments pointing to integer to be printed
 */

void print_int(va_list arg)
{
	int myNum;

	myNum = va_arg(arg, int);
	printf("%d", myNum);
}

/**
 * print_float - Outputs a float
 * @arg: Arguments pointing to float to be printed
 */

void print_float(va_list arg)
{
	float myNum;

	myNum = va_arg(arg, double);
	printf("%f", myNum);
}

/**
 * print_string - Outputs string.
 * @arg: Arguments pointing string to be printed.
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - Outputs anything
 * @format: String of characters representing types of arguments
 * @...: Variable number of arguments to be Outputted
 *
 * Description: Any argument not of type char, int, float,
 *              or char * will be ignored
 *              If string argument is NULL, (nil) is outputted instead.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int x = 0, m = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + x)))
	{
		m = 0;

		while (m < 4 && (*(format + x) != *(funcs[m].symbol)))
		m++;

		if (m < 4)
		{
			printf("%s", separator);
			funcs[m].print(args);
			separator = ", ";
		}

		x++;
	}

	printf("\n");

	va_end(args);
}
