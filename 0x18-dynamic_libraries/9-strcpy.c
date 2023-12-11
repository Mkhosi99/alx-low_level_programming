#include "main.h"
/**
 *_strcpy - Copy paste String
 *@dest: destination
 *@src: source
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int incre = 0;

	while (*(src + incre) != '\0')
	{
	*(dest + incre) = *(src + incre);
	incre++;
	}
	*(dest + incre) = '\0';

	return (dest);
}
