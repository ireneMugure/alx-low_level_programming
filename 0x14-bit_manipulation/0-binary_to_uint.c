#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary num to unsigned int
 * @b: string containing the binary num
 *
 * Return: converted num
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int result = 0;
	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = result * 2 + (b[i] != '0');
		i++;
	}
	return (result);
}
