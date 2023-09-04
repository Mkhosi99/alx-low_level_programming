#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function reads a text file and prints it to the POSIX stdout
 * @filename: Pointer to the name of file
 * @letters: Number of letters the function should read and print
 *
 * Return: If functions fails or filename is NULL return 0
 *         otherwise return actual number of bytes the function
 *         can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int txt_file;
	char *buff;
	ssize_t rd_byte, wrt_byte;

	if (filename == NULL)
		return (0);

	txt_file = open(filename, O_RDONLY);
	if (txt_file == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	rd_byte = read(txt_file, buff, letters);
	if (rd_byte == -1)
	{
		free(buff);
		close(txt_file);
		return (0);
	}

	wrt_byte = write(STDOUT_FILENO, buff, rd_byte);
	free(buff);
	close(txt_file);

	if (wrt_byte == -1)
		return (0);

	return (wrt_byte);
}


























