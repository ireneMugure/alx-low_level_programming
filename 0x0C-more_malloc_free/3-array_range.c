#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates array of ints
 * @min: min range of values
 * @max: min range of values and num elements
 *
 * Return: pointer to the new aaray
 *
 */
int *array_range(int min, int max)
{
	int *ptr;
	int l, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (l = 0; min <= max; l++)
		ptr[l] = min++;

	return (ptr);
}
