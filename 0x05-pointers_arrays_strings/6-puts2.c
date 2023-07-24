#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints one char out of 2 ini a stirng
 * new line follows
 * @str: string to print the characters from
 */
void puts2(char *str)
{
	int ch, a;

	ch = 0;

	while (str[ch] != '\0')
	{
		ch++;
	}

	for (a = 0; a < ch; a += 2)
	{
		putchar(str[a]);
	}

	putchar('\n');
}
