#include "main.h"
/**
 * reverse_array - reverse array of ints
 * @a: array
 * @n: number of the elments of the array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
