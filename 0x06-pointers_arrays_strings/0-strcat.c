#include "main.h"
#include <stdio.h>
/**
 * *_strcat - concatenates two strings
 * @dest: destination of pointer
 * @src: source of pointer
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
int k = -1, a;
for (i = 0; dest[a] != '\0'; a++)
;

do {
	k++;
	dest[a] = src[k];
	a++;
} while (src[k] != '\0');

return (dest);
}
