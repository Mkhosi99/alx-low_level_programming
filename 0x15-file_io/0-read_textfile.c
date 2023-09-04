#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function reads a text file and prints it to the POSIX stdout
 * @filename: Pointer to the name of file
 * @letters: Number of letters the function should read and print
 *
 * Return: If functions fails or filename is NULL return 0 
 *         otherwise return the actual number of bytes the function
 *         can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *bump;

	if (filename == NULL)
		return (0);

	bump = malloc(sizeof(char) * letters);
	if (bump == NULL)
		return (0);

	x = open(filename, O_RDONLY);
	y = read(x, bump, letters);
	z = write(STDOUT_FILENO, bump, y);

	if (x == -1 || y == -1 || z == -1 || z != y)
	{
		free(bump);
		return (0);
	}

	free(bump);
	close(x);

	return (z);
}

