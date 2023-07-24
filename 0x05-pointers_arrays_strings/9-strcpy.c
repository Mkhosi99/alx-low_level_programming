#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string
 * include the terminating null char (\0)
 * @dest: pointer to the buffer where string is copied
 * @src: string that must be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int strng, i;

	strng = 0;

	while (src[strng] != '\0')
	{
		strng++;
	}

	for (i = 0; i < strng; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
