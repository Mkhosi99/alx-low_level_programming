#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *make_buffer(char *file);
void shut_file(int fle_descrip);

/**
 * make_buffer - Allocates 1024 bytes for a buffer
 * @file: Name of file buffer storing characters
 *
 * Return: Pointer to newly allocateed buffer
 */

char *make_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * shut_file - Closes file descriptors
 * @fle_descrip: The file descriptor that will be closed
 */

void shut_file(int fle_descrip)
{
	int x;

	x = close(fle_descrip);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fle_descrip);
		exit(100);
	}
}

/**
 * main - Copies contents of file to another file
 * @argc: Number of arguments supplied to program
 * @argv: Array of pointers to the arguments
 *
 * Return: 0 if success
 *
 * Description: If argument count is wrong, exit code 97
 *              If file_derive is non existent or can't be read, exit code 98
 *              If file_toward cannot be created or written, exit code 99
 *              If file_derive or file_toward can't be closed, exit code 100
 */

int main(int argc, char *argv[])
{
	int derive, toward, x, y;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = make_buffer(argv[2]);
	derive = open(argv[1], O_RDONLY);
	x = read(derive, buff, 1024);
	toward = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (derive == -1 || x == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		y = write(toward, buff, x);
		if (toward == -1 || y == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		x = read(derive, buff, 1024);
		toward = open(argv[2], O_WRONLY | O_APPEND);

	} while (x > 0);

	free(buff);
	shut_file(derive);
	shut_file(toward);

	return (0);
}
