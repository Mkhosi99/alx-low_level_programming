#include "main.h"
#include <stdio.h>

/**
* _strpbrk - a function that searches a string for any of a set of bytes
* @s: the string to be searched
* @accept: the string with the pattern to be matched
* Return: retirns a pointer to the byte in s that matches one of the bytes
* in accept, or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{

	int a, k;

	for (a = 0; s[a] != 0; a++)
	{
		for (k = 0; accept[k] != 0; k++)
		{
			if (s[a] == accept[k])
			{
				return ((s + a));
			}
		}
	}
	return (NULL);
}
