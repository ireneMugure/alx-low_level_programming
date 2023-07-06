#include "main.h"

/**
 * print_binary - prints decimal number equivalent
 * @n: binary number
 *
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int bitcurrent;

	for (i = 63; i >= 0; i--)
	{
		bitcurrent = n >> i;

		if (bitcurrent & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
