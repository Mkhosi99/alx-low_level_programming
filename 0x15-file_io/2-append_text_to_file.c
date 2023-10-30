#include "main.h"

/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: points to name of the file
 * @text_content: string to add at the end of the file
 *
 * Return: -1 if function fails or filename is NULL,
 *         non existent or no required permissions to write file,
 *         1 on succes
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int m, k, lenth = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenth = 0; text_content[lenth];)
			lenth++;
	}

	m = open(filename, O_WRONLY | O_APPEND);
	k = write(m, text_content, lenth);

	if (m == -1 || k == -1)
		return (-1);

	close(m);

	return (1);
}
