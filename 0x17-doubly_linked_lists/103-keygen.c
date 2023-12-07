#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char psswrd[7], *codes;
	int lenth = strlen(argv[1]), x, temp;

	codes = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temp = (lenth ^ 59) & 63;
	psswrd[0] = codes[temp];

	temp = 0;
	for (x = 0; x < lenth; x++)
		temp += argv[1][x];
	psswrd[1] = codes[(temp ^ 79) & 63];

	temp = 1;
	for (x = 0; x < lenth; x++)
		temp *= argv[1][x];
	psswrd[2] = codes[(temp ^ 85) & 63];

	temp = 0;
	for (x = 0; x < lenth; x++)
	{
		if (argv[1][x] > temp)
			temp = argv[1][x];
	}
	srand(temp ^ 14);
	psswrd[3] = codes[rand() & 63];

	temp = 0;
	for (x = 0; x < lenth; x++)
		temp += (argv[1][x] * argv[1][x]);
	psswrd[4] = codes[(temp ^ 239) & 63];

	for (x = 0; x < argv[1][0]; x++)
		temp = rand();
	psswrd[5] = codes[(temp ^ 229) & 63];

	psswrd[6] = '\0';
	printf("%s", psswrd);
	return (0);
}
