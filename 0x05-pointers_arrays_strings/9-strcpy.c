#include "main.h"
/**
 * _strcpy - Copy a string to stdout
 * @dest: Destination value
 * @src: Source value
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int d;
for (d = 0; src[d] != '\0'; d++)
{
dest[d] = src[d];
}
dest[d++] = '\0';
return (dest);
}
