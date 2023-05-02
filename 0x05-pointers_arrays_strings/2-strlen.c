#include <stdio.h>
/**
 * _strlen - Returns length of str.
 * @str: String length
 * Return: Length of str.
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
