#include "main.h"

/**
 * flip_bits - bits to change to get from one number to another
 * @n: first num
 * @m: second num
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int l, count = 0;
	unsigned long int result;
	unsigned long int exclusive = n ^ m;

	for (l = 63; l >= 0; l--)
	{
		result = exclusive >> l;
		if (result & 1)
			count++;
	}

	return (count);
}
