#include "main.h"
/**
 * puts_half - Prints half of a string to stdout
 * @Str: The string
 * Return: nothing
 */

void puts_half(char *Str)
{
	int x = 0;
	int y;

	while (Str[x] != '\0')
	{
	x++;
	}
	if (x % 2 == 1)
	{
	y = (x - 1) / 2;
	y += 1;
	}
	else
	{
	y = x / 2;
	}

	for (; y < x; y++)
	{
	_putchar(Str[y]);
	}
	_putchar('\n');
}
