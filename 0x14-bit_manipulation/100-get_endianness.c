#include "main.h"

/**
 * get_endianness - little or big endian
 *
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	unsigned int value = 1;
	char *ptr = (char *)&value;

	return (*ptr);
}
