#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area
 * @dest: memory stored
 * @src: memory copied
 * @n: number of bytes
 * Return: dest memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int q = 0;
	int i = n;

	for (; q < i; q++)
	{

	dest[q] = src[q];
	n--;
	}
	return (dest);
}
