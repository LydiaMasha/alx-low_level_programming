#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer but to a new allocated space(copy of original)
 * @str: char
 * @z: string to copy from
 *
 * Return: pointer to duplicated string, NULL if fails
 */

char *_strdup(char *str)
{
	char *s;
	int a = 0;
	int z = 0;

		if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * (a + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	while (str[a] != '\0')
		a++;

	for (z = 0; str[z]; z++)
		s[z] = str[z];

	return (s);
}
