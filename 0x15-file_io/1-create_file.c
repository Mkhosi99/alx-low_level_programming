#include "main.h"

/**
 * create_file - function creates a file
 * @filename: points to name of file to create
 * @text_content: points to string to write to the file
 *
 * Return: 1 on succes, Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int m, k, lenth = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenth = 0; text_content[lenth];)
			lenth++;
	}

	m = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	k = write(m, text_content, lenth);

	if (m == -1 || k == -1)
		return (-1);

	close(m);

	return (1);
}
