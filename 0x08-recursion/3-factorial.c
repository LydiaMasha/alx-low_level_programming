#include "main.h"

/**
 * factorial - return factorial of a given number
 * @n: integer to be tested
 * Return: Factorial of n, and -1 for negative input
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else
		if (n < 0)
		{
			return (-1);
		}
		else
		{
			int result = 1;

			for (int i = 1; i <= n; i++)
				result *= i;
		}
	return (1);
}
