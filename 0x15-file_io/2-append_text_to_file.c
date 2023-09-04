#include "main.h"

/**
 * append_text_to_file - Function appends a text at the end of a file
 * @filename: Points to name of file
 * @text_content: String to be added at the end of file
 *
 * Return: if failure or NULL return -1
 *         otherwise if file is non existant return -1
 *         else return -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wrt, lenth = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenth = 0; text_content[lenth];)
			lenth++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wrt = write(opn, text_content, lenth);

	if (opn == -1 || wrt == -1)
		return (-1);

	close(opn);

	return (1);
}
