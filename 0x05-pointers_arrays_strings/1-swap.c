#include <stdio.h>
/**
 * swap_int - swaps two integers
 * @a: first int
 * @b: second int
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
