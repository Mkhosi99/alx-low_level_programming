#include "main.h"
/**
 *_isupper - function verifies if a character is uppercase or not
 *@c: the tested character
 *Return: returns 1 if it is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);

return (0);
}
