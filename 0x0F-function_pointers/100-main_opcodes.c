#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: num of args
 * @argv: array of args
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int bytes, l;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (l = 0; l < bytes; l++)
	{
		if (l == bytes - 1)
		{
			printf("%02hhx\n", arr[l]);
			break;
		}
		printf("%02hhx ", arr[l]);
	}
	return (0);
}
