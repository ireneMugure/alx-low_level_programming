#include "main.h"
#include <stdio.h>
/**
* print_rev - Prints a string in rev to the stdout
* @S: The string
* Return: Nothing
*/
void print_rev(char *S)
{
	int c = 0;

	while (S[c] != '\0')
	{
	c++;
	}

	for (c -= 1; c >= 0; c--)
	{
	_putchar(S[c]);
	}
	_putchar('\n');
}
