#include "main.h"
/**
*_strspn - searches number of bytes in initial
* segment of s which consist only of bytes from accept
*@s:segment assesed
*@accept: referenced bytes
*
*Return: returns the number of bytes in the initial
* segment of s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte_s = 0;
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (accept[m] == *s)
			{
				byte_s++;
				break;
			}
			else if ((accept[m + 1]) == '\0')
				return (byte_s);
		}
		s++;
	}
	return (byte_s);
}
