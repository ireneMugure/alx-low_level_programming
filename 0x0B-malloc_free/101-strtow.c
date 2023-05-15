#include <stdlib.h>
#include "main.h"

/**
 * count_word - counts words in a string
 * @s: string
 *
 * Return: num of words
 *
 */

int count_word(char *s)
{
	int fla, c, w;

	fla = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			fla = 0;
		else if (fla == 0)
		{
			fla = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - string into words
 * @str: string
 *
 * Return: pointer to an array or NULL (ERROR)
 *
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, length = 0, words, c = 0, start, end;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
		if (matrix == NULL)
		return (NULL);
}
	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
					*tmp = '\0';

					matrix[k] = tmp - c;

					k++;

					c = 0;
				}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;
	return (matrix);
}
