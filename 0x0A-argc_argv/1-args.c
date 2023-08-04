#include <stdio.h>

/**
 * main - Prints number of arguments passed to it
 * @argc: number of arguments supplied to program
 * @argv: Array of pointers to arguments
 *
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
