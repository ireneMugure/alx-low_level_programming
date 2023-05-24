#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints array elements on new lines
 * @array: the array
 * @size: elements to print
 * @action: pointer to print
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int l;

	if (array == NULL || action == NULL)
		return;

	for (l = 0; l < size; l++)
	{
		action(array[l]);
	}
}
