#include "main.h"

/**
 * create_file - makes file.
 * @filename: A pointer to the name of file to.
 * @text_content: A pointer to string to write to file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fund, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fund = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fund, text_content, len);

	if (fund == -1 || w == -1)
		return (-1);

	close(fund);

	return (1);
}
