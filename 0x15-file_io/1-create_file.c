#include "main.h"

/**
 * create_file - Function creates a file
 * @filename: Points to name of file to create
 * @text_content: Pointer to string that will write to the file
 *
 * Return: If the function fails return -1, otherwise return -1
 */

int create_file(const char *filename, char *text_content)
{
	int opn, wrt, lenth = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenth = 0; text_content[lenth];)
			lenth++;
	}

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(opn, text_content, lenth);

	if (opn == -1 || wrt == -1)
		return (-1);

	close(opn);

	return (1);
}
