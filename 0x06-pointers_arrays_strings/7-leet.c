#include "main.h"
#include <stdio.h>
/**
 * leet - changes vowels to numbers
 * @s: string that is analyzed
 *
 * Return: String with vowels changed
 */
char *leet(char *s)
{
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int j = 0;
	int b;

	while (*(s + j) != '\0')
	{
		for (b = 0; b <= 9; b++)
		{
			if (*(s + j) == a[b])
			{
				*(s + j) = n[b];
			}
		}
		j++;
	}
	return (s);
}
