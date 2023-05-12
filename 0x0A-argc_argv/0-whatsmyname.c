#include <stdio.h>
#include "main.h"

/**
 * main - prints name
 * @argc: num of args
 * @argv: array of args
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
