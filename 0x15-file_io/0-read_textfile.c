#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function reads text file print to STDOUT
 * @filename: the text file to read
 * @letters: the number of letters to read
 * Return: w if number of bytes is read and printed
 *         0 if otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufr;
	ssize_t fle_descrp;
	ssize_t m;
	ssize_t k;

	fle_descrp = open(filename, O_RDONLY);
	if (fle_descrp == -1)
		return (0);
	bufr = malloc(sizeof(char) * letters);
	k = read(fle_descrp, bufr, letteres);
	m = write(STDOUT_FILENO, bufr, k);

	free(bufr);
	close(fle_descrp);
	return (m);
}
