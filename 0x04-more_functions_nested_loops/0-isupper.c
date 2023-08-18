#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 * @c: Character to be printed
 * Return: (1) uppercase, (0) otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

