#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory with byte
 * @s: memory area
 * @b: char
 * @n: num of times to copy b
 *
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
		s[l] = b;
	}

	return (s);
}
/**
 * *_calloc - allocates memory for an array
 * @nmemb: num of elments in array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
