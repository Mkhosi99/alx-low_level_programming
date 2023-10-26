#include "main.h"

/**
* binary_to_uint - will convert binary number to unsigned int
* @bin: string of binary number
* Return: unsigned int
*/
unsigned int binary_to_uint(const char *bin)
{
	unsigned int w = 0, e = 0;

	if (!bin)
		return (0);

	while (bin[w])
	{
		if (bin[w] == '0' || bin[w] == '1')
		{
			e <<= 1;
			e += bin[w] - '0';
			w++;
		}
		else
			return (0);
	}
	return (e);
}
