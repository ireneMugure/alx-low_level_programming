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
	char *sta;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	sta = malloc(sizeof(char) * (i + 1));

	if (sta == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		sta[r] = str[r];

	return (sta);
}
