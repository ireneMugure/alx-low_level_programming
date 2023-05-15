#include "main.h"
#include <stdlib.h>

/**
 * argstostr - entry
 * @ac: int value
 * @av: double pointer array
 *
 * Return: 0
 *
 */

char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *sta;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	sta = malloc(sizeof(char) * l + 1);
	if (sta == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		sta[r] = av[i][n];
		r++;
	}
	if (sta[r] == '\0')
	{
		sta[r++] = '\n';
	}
	}
	return (sta);
}
