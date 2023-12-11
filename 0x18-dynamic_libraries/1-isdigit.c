#include "main.h"
/**
 *_isdigit - function verifies if a character is a digit or not
 *@c: character to be assesed
 *Return: return 1 if it is uppercase, 0 if otherwise
 */

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
