#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates memory using malloc
 * @ptr: pointer
 * @old_size: size of memory
 * @new_size: new size of memory
 *
 * Return: pointer
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int d;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);

	}

	if (!ptr)
		return (malloc(new_size));
	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (d = 0; d < new_size; d++)
			ptr1[d] = old_ptr[d];
	}

	free(ptr);
	return (ptr1);

}
