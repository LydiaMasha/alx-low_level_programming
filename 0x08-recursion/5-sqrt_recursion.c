#include "main.h"

int actual_sqrt_recursion(int i, int n);
/**
 * _sqrt_recursion - Natural square root of a number
 * @n: Number to get sqr root of
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find natural sqrt of a number n
 * @n: Number to calculate sqrt of
 * @i: iterator
 *
 * Return: Sqrt
 *
 */
int actual_sqrt_recursion(int i, int n)
{
	if (i * i > n)
		return (-1);
	if (i * i == 0)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

