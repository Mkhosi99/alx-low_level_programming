#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * read_textfile - will read text file and prints it to POSIX stdout
 * @filename: points to name of the file
 * @letters: number of letters function must read and print
 *
 * Return: 0 if function failure of NULL filename
 *         w - number of bytes the function can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	 ssize_t m, k, s;
	char *bufr;

	if (filename == NULL)
		return (0);

	bufr = malloc(sizeof(char) * letters);
	if (bufr ==  NULL)
		return (0);

	m = open(filename, O_RDONLY);
	k = read(m, bufr, letters);
	s = write(STDOUT_FILENO, bufr, k);

	if (m == -1 || k == -1 || s == -1 || s != k)
	{
		free(bufr);
		return (0);
	}

	free(bufr);
	close(m);

	return (s);

}
