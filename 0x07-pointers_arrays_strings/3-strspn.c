#include "main.h"
#include <stdio.h>

/**
* _strspn - function that gets length of prefix substring
* @s: string to be tested
* @accept: string to find
* Return: returns number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, k;
	unsigned int c = 0;

	for (a = 0; s[a] != 0; a++)
	{
		if (s[a] == ' ')
			break;
		for (k = 0; accept[k] != 0; k++)
		{
			if (s[a] == accept[k])
				c++;
		}
	}
	return (c);
}
