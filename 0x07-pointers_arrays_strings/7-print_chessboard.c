#include "main.h"
#include <stdio.h>

/**
* print_chessboard - function that prints chessboard
* @a: pointer to 8x8 array of characters
* Return: returns nothing
*/
void print_chessboard(char (*a)[8])
{
	int j, k;

	for (j = 0; j < 8; j++)
	{
		for (k = 0; k < 8; k++)
		{
			printf("%c", a[j][k]);
		}
		printf("\n");
	}
}
