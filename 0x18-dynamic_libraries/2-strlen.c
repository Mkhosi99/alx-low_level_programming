#include "main.h"
/**
 *_strlen - returns length of a string
 *@s: string
 *Return: returns length
 */

int _strlen(char *s)
{
	int add, incre;

	incre = 0;

	for (add = 0; s[add] != '\0'; add++)
		incre++;

	return (incre);
}
