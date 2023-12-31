#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer but to a new allocated space(copy of original)
 * @str: char
 *
 * Return: pointer to duplicated string, NULL if fails
 */

char *_strdup(char *str)
{
	char *sss;
	int a = 0;
	int z = 0;

		if (str == NULL)
	{
		return (NULL);
	}
		while (str[a] != '\0')
	{
		a++;
	}

	sss = malloc(sizeof(char) * (a + 1));
	if (sss == NULL)
	{
		return (NULL);
	}

	for (z = 0; z < a; z++)
	{
		sss[z] = str[z];
	}
	sss[z] = '\0';

	return (sss);
}
