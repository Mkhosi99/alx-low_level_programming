#include "main.h"
/**
* get_endianness - checks endianness
* Return: 0 if big endian or 1 if small endian
*/
int get_endianness(void)
{
	unsigned int m = 1;
	char *a = (char *)&m;

	if (*a)
		return (1);
	else
		return (0);
}
