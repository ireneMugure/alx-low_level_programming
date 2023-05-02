#include "main.h"
/**
 * puts2 - Prints every character of a string to stdout
 * @Str: The String
 * Return: nothing
 */
void puts2(char *Str)
{
	int x;
	int y = 0;

	while (Str[y] != '\0')
	{
	y++;
	}

	for (x = 0; x < y; x += 2)
	{
	_putchar(Str[x]);
	}
	_putchar('\n');
}
