#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of the string
 * new line follows
 * @str: string that must be printed
 */
void puts_half(char *str)
{
	int ch, a, b;

	ch = 0;

	while (str[ch] != '\0')
	{
		ch++;
	}

	if (ch % 2 == 0)
	{
		for (a = ch / 2; str[a] != '\0'; a++)
		{
			putchar(str[a]);
		}
	} else
	{
		for (b = (ch - 1) / 2; b < ch - 1; b++)
		{
			putchar(str[b + 1]);
		}
	}
	putchar('\n');
}
