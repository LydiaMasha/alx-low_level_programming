#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Sums parameters passed in a function
 * @n: Integer
 *
 * Return: Always 0 (Success)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum = sum + va_arg(ap, int);
	va_end(ap);
	return (sum);
}
