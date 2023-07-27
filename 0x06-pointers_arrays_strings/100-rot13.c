#include "main.h"
#include <stdio.h>
/**
 * rot13 - change letters to ROT13.
 * @s: string that is analyzed
 *
 * Return: String with all letters in ROT13
 */
char *rot13(char *s)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int k = 0;
	int l;

	while (*(s + k) != '\0')
	{
		for (l = 0; l <= 51; l++)
		{
			if (*(s + k) == a[l])
			{
				*(s + k) = rot[l];
				break;
			}
		}
		k++;
	}
	return (s);
}
