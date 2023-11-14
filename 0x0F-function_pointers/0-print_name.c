#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: string/character to be printed
 * @f: function pointer
 *
 * Return: Void/Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
