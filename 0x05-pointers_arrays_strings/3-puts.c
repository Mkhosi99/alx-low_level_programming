#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string to the standard output
 * @str: pointer to the string that must be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}

	putchar('\n');
}
