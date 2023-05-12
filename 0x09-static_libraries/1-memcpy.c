#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory stored
 * @src: memory copied
 * @n: num of bytes
 *
 * Return: return memory changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
