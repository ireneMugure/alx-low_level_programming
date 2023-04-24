#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char lowCase;

	for (lowCase = 'a'; lowCase <= 'z'; lowCase++)
	putchar(lowCase);

	for (lowCase = 'A'; lowCase <= 'Z'; lowCase++)
	putchar(lowCase);
	putchar('\n');

	return (0);
}
