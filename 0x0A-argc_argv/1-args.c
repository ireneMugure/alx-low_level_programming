#include <stdio.h>
#include "main.h"
/**
 * main - prints no .of args passed
 * @argc: num of args
 * @argv: aray of args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void) argv; /*ignore argv*/
printf("%d\n", argc - 1);

return (0);
}
