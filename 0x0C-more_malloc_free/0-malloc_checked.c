#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 * @b: num of bytes allocated
 *
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
