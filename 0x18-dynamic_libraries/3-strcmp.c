#include "main.h"

/**
*  _strcmp - Function which compare two strings and
*@s1: first string
*@s2:second string
*Return:
*		returns zero if s1 == s2
*		returns negative number if s1 < s2
*		returns positive number if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	int m = 0, diffrnce = 0;

	while (1)
	{
	if (s1[m] == '\0' && s2[m] == '\0')
		break;
	else if (s1[m] == '\0')
	{
		diffrnce = s1[m];
		break;
	}
	else if (s2[m] == '\0')
	{
		diffrnce = s1[m];
		break;
	}
	else if (s1[m] != s2[m])
	{
		diffrnce = s1[m] - s2[m];
		break;
	}
	else
		m++;
	}
	return (diffrnce);
}
