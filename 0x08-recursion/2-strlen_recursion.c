#include "main.h"

/**
* _strlen_recursion - function returns the length of string
* @s: string length to be counted
* Return: returns length of string as interger
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
