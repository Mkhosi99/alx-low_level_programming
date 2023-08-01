#include "main.h"
#include <stdio.h>

/**
* set_string - function that sets value of pointer to char
* @s: pointer that points to pointer that also points to a char
* @to: pointer that points to char
* Return: returns nothing
*/
void set_string(char **s, char *to)
{
	*s = to;
}
