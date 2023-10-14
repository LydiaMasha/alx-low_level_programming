#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator: Prints each array element on a new line
 * @array: Array
 * @size: Number of elements to print
 * @action: Pointer to print
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
