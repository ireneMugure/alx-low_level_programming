#include "main.h"
/**
 * _memset - block of memory
 * @s: starting address
 * @b: desired value
 * @n: num of bytes
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int d = 0;

	for (; n > 0; d++)
	{
		s[d] = b;
		n--;
	}
	return (s);
}
