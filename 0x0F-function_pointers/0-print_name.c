#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a pointer to function
 * @name: name of the person
 * @f: Function to pointer
 * Return: Always 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
