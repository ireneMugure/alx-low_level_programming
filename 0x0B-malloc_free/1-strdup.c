#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - duplicate memory space location
 * @str: the char value
 * Return: 0
 *
 */

char *_strdup(char *str)
{
	char *stra
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	stra = malloc(sizeof(char) * (i + 1));

	if (stra == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		stra[r] = str[r];

	return (stra);
}
