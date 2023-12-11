#include "main.h"
/**
*  _strncpy - function copies a string, including
*             terminating null byte
*  If the length of the source string is less than the maximum byte number,
*  the remainder of the destination string is filled with null bytes
*@dest: buffer storing the string copy
*@src:the source string
*@n:max number of byte copied
*Return: returns
*/

char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && src[m] != '\0'; m++)
		dest[m] = src[m];

	for ( ; m < n; m++)
		dest[m] = '\0';

	return (dest);
}
