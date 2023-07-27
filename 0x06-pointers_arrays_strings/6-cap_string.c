#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes words in a string
 * @s: string that is analyzed
 *
 * Return: String with all the words capitalized
 */
char *cap_string(char *s)
{
	int k, b;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	k = 0;
	while (*(s + k) != '\0')
	{
		if (*(s + k) >= 'a' && *(s + k) <= 'z')
		{
			if (k == 0)
			{
				*(s + k) = *(s + k) - 32;
			}
			else
			{
				for (b = 0; b <= 12; b++)
				{
					if (a[b] == *(s + k - 1))
					{
						*(s + k) = *(s + k) - 32;
					}
				}
			}
		}
	k++;
	}
	return (s);
}
