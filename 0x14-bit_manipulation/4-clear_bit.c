#include "main.h"

/**
 * clear_bit - bit value to 0
 * @n: pointer to the changed number.
 * @index: inde of the bit to clear
 *
 * Return: 1 for success, -1 fail
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

