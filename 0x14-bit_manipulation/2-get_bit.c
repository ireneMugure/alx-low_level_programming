#include "main.h"

/**
 * get_bit - value of a bit at an index in a decimal num.
 * @n: num
 * @index: ind of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
