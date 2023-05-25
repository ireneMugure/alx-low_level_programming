#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all params
 * @n: num of params passed to the func
 * @...: variable num of params to calc sum of
 *
 * Return: if n == 0 - 0. else sum of params
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int l, sum = 0;

	va_start(ap, n);

	for (l = 0; l < n; l++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
