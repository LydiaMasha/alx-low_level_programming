#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @c: Character to be printed
 * @size: size of memory to print
 *
 * Return: Always 0 (Success)
 *
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 1; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
