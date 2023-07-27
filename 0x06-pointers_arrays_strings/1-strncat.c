#include "main.h"
#include <stdio.h>
/**
 * *_strncat - concatenates n bytes of the two strings
 * @dest: destination of pointer
 * @src: source of pointer
 * @n: number of bytes
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{


int dest_len, a;
for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
;

for (a = 0; a < n && src[a] != '\0'; a++)
	dest[dest_len + a] = src[a];

/*should end with a end of string char*/
dest[dest_len + a] = '\0';

return (dest);
}
