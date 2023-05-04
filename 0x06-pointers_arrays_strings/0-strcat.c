#include "main.h"
#include <stdio.h>
/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dlength = 0, i;

	while (dest[dlength])
	{
		dlength++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlength] = src[i];
		dlength++;
	}

	dest[dlength] = '\0';
	return (dest);
}
