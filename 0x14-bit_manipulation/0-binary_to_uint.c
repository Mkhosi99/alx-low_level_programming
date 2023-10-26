#include "main.h"
#include <stdio.h>
/**
* binary_to_uint - Function will transform a binary number to unsigned int
* @b: points to string
* Return: converted number or 0 otherwise
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int reslt = 0;
	int m = 0;

	if (b == NULL)
		return (0);

	while (b[m] != '\0')
	{
		if (b[m] != '0' && b[m] != '1')
			return (0);

		reslt = reslt * 2 + (b[m] - '0');
		b++;
	}

	return (reslt);
}
