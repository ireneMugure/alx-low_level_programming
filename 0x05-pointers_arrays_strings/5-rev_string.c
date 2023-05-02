#include "main.h"
/**
 * rev_string - Reverse a string to stdout
 * @S: The string to be modified
 * Return: Nothing
 */

void rev_string(char *S)
{
	int length = 0, index = 0;
	char tmp;

	while (S[index++])
	length++;

	for (index = length - 1; index >= length / 2; index--)
	{
	tmp = S[index];
	S[index] = S[length - index - 1];
	S[length - index - 1] = tmp;
	}
}
