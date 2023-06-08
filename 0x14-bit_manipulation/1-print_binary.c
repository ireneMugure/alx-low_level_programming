#include "main.h"

/**
 * print_binary - binary of a decimal number
 * @n: number to print
 *
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int result;

	for (i = 63; i >= 0; i--)
	{
		result = n >> i;

		if (result & 1)
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