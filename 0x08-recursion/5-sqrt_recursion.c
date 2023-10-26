#include "main.h"

/**
 * _sqrt_recursion - Finds the square root of a number
 * @n: Integer to test
 * Return: Square root, -1 for a num with no square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		if (n != 0)
		{
			return (_sqrt_recursion(n));
		}
}
