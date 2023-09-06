#include "main.h"

/**
 * _isdigit - Checks if a parameter is a digit through (0 to 9)
 * @c: Parameter
 * Return: (1) if c is a digit, (0) otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
