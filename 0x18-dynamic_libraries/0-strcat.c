#include "main.h"

/**
 * _strcat - concatenates string pointed to by @src to
 *           the end of string pointed to by @dest
 *@dest: String that will append
 *@src: string that will be concatenated
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int idx = 0, dest_lenth = 0;

	while (dest[idx++])
		dest_lenth++;
	for (idx = 0; src[idx]; idx++)
		dest[dest_lenth++] = src[idx];

	return (dest);
}
