#include "main.h"
#include <stddef.h> 
/**
*_strchr - Returns a pointer to the first occurrence
*          of the character c in string s, or NULL if otherwise
*@s:string assesed
*@c:character assesed
*
*Return: returns pointer to the first occcurence of c
*/
char *_strchr(char *s, char c)
{
	int m;

	for (m = 0; (s[m] != c) && (s[m] != '\0'); m++)
		;
	if (s[m] == c)
		return (s + m);
	else
		return (NULL);
}
