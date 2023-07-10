#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file STDOUT.
 * @filename: text file
 * @letters: num of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t q;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	q = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, q);

	free(buf);
	close(fd);
	return (w);
}
