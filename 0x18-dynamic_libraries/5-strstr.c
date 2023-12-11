#include "main.h"
/**
*_strstr - function finds the first occurrence
*          of substring needle in string haystack
*          terminating null byte not compared
*@haystack: string where the search is made
*@needle: string whose occurence is searched in haystack
*Return: Returns a pointer to the beginning of the located
* substring, or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int m;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		m = 0;

		if (haystack[m] == needle[m])
		{
			do {
				if (needle[m + 1] == '\0')
					return (haystack);
				m++;
			} while (haystack[m] == needle[m]);
		}
		haystack++;
	}
	return ('\0');
}
