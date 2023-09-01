#include "main.h"

/**
* binary_to_uint - Function converts binary number to an unsigned int
* @bin: The string of binary numbers
* Return: Return unsigned int
*/
unsigned int binary_to_uint(const char *bin)
{
	unsigned int x = 0, m = 0;

	if (!bin)
		return (0);

	while (bin[x])
	{
		if (bin[x] == '0' || bin[x] == '1')
		{
			m <<= 1;
			m += bin[x] - '0';
			x++;
		}
		else
			return (0);
	}
	return (m);
}
