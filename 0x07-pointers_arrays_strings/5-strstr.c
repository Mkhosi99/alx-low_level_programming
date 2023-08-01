#include <stdio.h>
#include "main.h"

/**
 * _strstr - function that locates substring
 * @haystack: string to be tested
 * @needle: substring to be searched
 * Return: returns pointer to beginning
 * located substring, or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b = 0, k;

	for (a = 0; haystack[a] != 0; a++)
	{
		k = a;
		b = 0;
		for (; needle[b] != 0; )
		{
			if (haystack[k++] == needle[b++])
			{
				continue;
			}
			break;
		}
		if (needle[b] == '\0')
			return ((haystack + a));
	}
	return (NULL);
}
