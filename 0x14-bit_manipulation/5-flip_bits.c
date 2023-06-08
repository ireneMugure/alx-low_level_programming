#include "main.h"

/**
 * flip_bits - bits to change count
 * @n: first num
 * @m: second num
 *
 * Return: num of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int result;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		result = exclusive >> i;
		if (result & 1)
			count++;
	}

	return (count);
}
