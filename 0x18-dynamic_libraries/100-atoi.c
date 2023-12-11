#include "main.h"
/**
* _atoi - changes a string to an int
* @s: the string to be changed
*
* Return: the converted int
*/
int _atoi(char *s)
{
	int m = 1;

	unsigned int numb = 0;

	do {
	if (*s == '-')
	m *= -1;
	else if (*s >= '0' && *s <= '9')
	numb = numb * 10 + (*s - '0');
	else if (numb > 0)
	break;
	} while (*s++);

	return (numb * m);
}
