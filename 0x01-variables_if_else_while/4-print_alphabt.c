#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	char lowCase, e, q;

	e = 'e';
	q = 'q';

	for (lowCase = 'a'; lowCase <= 'z'; lowCase++)
	{
	if (lowCase != e && lowCase != q)
	putchar(lowCase);
	}
	putchar('\n');
	return (0);
}
