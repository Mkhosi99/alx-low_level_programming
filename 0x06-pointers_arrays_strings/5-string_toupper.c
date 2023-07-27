#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes lowercase to uppercase.
 * @s: string to be looked at
 *
 * Return: String with all Uppercase letters
 */
char *string_toupper(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		if (*(s + a) >= 'a' && *(s + a) <= 'z')
		{
			*(s + a) = *(s + a) - 32;
		}
		a++;
	}
	return (s);
}
