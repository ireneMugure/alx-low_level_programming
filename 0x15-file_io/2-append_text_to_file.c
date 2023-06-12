#include "main.h"

/**
 * append_text_to_file - Appends text .
 * @filename: A pointer to the name of file.
 * @text_content: The str to add to the end of file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int opo, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	opo = open(filename, O_WRONLY | O_APPEND);
	w = write(opo, text_content, len);

	if (opo == -1 || w == -1)
		return (-1);

	close(opo);

	return (1);
}
