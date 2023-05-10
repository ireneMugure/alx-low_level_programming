#include "main.h"

int actual_prime(int n, int l);

/**
 * is_prime_number - prime num or not
 * @n: num to evaluate
 *
 * Return: 1 (prime num), 0 (not a prime num)
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime
 * @n: the number
 * @l: iterator/looper
 *
 * Return: 1 if  prime, 0 if not
 */

int actual_prime(int n, int l)
{
	if (l == 1)
		return (1);
	if (n % l == 0 && l > 0)
		return (0);
	return (actual_prime(n, l - 1));
}
