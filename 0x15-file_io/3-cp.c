#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *make_bufr(char *fle);
void shut_fle(int fle_d);

/**
 * make_bufr - function allocates 1024 bytes for a buffer
 * @fle: name of file buffer storing chars
 *
 * Return: pointer to newly-allocated buffer
 */
char *make_bufr(char *fle)
{
	char *bufr;

	bufr = malloc(sizeof(char) * 1024);

	if (bufr == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fle);
		exit(99);
	}

	return (bufr);
}

/**
 * shut_fle - function closes file descriptors
 * @fle_d: file descriptor to be closed
 */
void shut_fle(int fle_d)
{
	int x;

	x = close(fle_d);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fle_d);
		exit(100);
	}
}

/**
 * main - copies contents of a file to another file
 * @argcnt: number of arguments passed to the program
 * @argvec: array of pointers to the arguments
 *
 * Return: 0 on success.
 *
 * Description: If argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98
 *              If file_to cannot be created or written to - exit code 99
 *              If file_to or file_from cannot be closed - exit code 100
 */
int main(int argcnt, char *argvec[])
{
	int derive, toward, m, k;
	char *bufr;

	if (argcnt != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bufr = make_bufr(argvec[2]);
	derive = open(argvec[1], O_RDONLY);
	m = read(derive, bufr, 1024);
	toward = open(argvec[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (derive == -1 || m == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argvec[1]);
			free(bufr);
			exit(98);
		}

		k = write(toward, bufr, m);
		if (toward == -1 || k == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argvec[2]);
			free(bufr);
			exit(99);
		}

		m = read(derive, bufr, 1024);
		toward = open(argvec[2], O_WRONLY | O_APPEND);

	} while (m > 0);

	free(bufr);
	shut_fle(derive);
	shut_fle(toward);

	return (0);
}
