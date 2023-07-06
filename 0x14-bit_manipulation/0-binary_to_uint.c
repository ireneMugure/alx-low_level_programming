#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string containing the binary num
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int l;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (l = 0; b[l]; l++)
	{
		if (b[l] < '0' || b[l] > '1')
			return (0);
		result = 2 * result + (b[l] - '0');
	}

	return (result);
}
