#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints number of arguments passed to it
 * @argc: number of arguments supplied to program
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((__unused__)), char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
}
