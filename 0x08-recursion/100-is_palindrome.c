#include "main.h"

int check_pal(char *s, int l int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks string if palindrome
 * @s: string to rev
 *
 * Return: 1 (yes), 0 (no)
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of string
 * @s: string
 *
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks chars
 * @s: string
 * @l: iterator/ looper
 * @length: length of string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int l, int length)
{
	if (*(s + l) != *(s + length - 1))
		return (0);
	if (l >= length)
		return (1);
	return (check_pal(s, l + 1, length - 1));
}
