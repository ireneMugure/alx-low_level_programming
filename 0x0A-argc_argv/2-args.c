#include <stdio.h>
#include "main.h"

/**
 * main - prints all args
 * @argc: num of args
 * @argv: array of args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int l;

	for (l = 0; l < argc; l++)
	{
		printf("%s\n", argv[l]);
	}

	return (0);
}
