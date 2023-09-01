#include "main.h"

/**
 * get_endianness - function checks the endianness
 *
 * Return: If big endian - 0
 *         If small endian - 1
 */
int get_endianness(void)
{
	int x = 1;
	char *endian = (char *)&x;

	if (*endian == 1)
		return (1);

	return (0);
}
