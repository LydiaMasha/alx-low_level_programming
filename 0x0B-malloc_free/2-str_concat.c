#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: String, Input one to be linked
 * @s2: string, Input two to be linked
 *
 * Return: Always 0 (Success), NULL if fails
 */

char *str_concat(char *s1, char *s2)
{
	char *link;
	int len_s1 = 0;
	int len_s2 = 0;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	link = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (link == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
		link[i] = s1[i];
	for (j = 0; j < len_s2; j++)
		link[i + j] = s2[j];

	link[i + j] = '\0';

	return (link);
}
