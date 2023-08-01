#include <stdio.h>
#include "main.h"

/**
* _strchr - function that locates character in string
* @s: string to locate first occurence of c
* @c: character to locate
* Return: returns pointer to the first occurence of c
*/
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; 1 ; a++)
	{
		if (s[a] == c)
			return ((s + a));
		if (s[a] == 0)
			break;
	}
	return (NULL);
}
