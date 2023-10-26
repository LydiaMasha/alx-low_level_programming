#include "main.h"

/**
 * _pow_recursion - recursively computes the value of x raised to power of y
 * @x: Integer to print
 * @y: Integer to test
 * Return: Value of x raised to power of y, -1 for negative input
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
		if (y == 0)
		{
			return (1);
		}
		else
		{
			return (x * _pow_recursion(x, y - 1));
		}
}
