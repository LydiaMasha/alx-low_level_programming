#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings for every n value of second string
 * @s1: Input one
 * @s2: Input two
 * @n: (Number of elements to concatenate from s2)
 *
 * Return: pointer to newly allocated space, NULL if fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	size_t a, b, c;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	if (b >= n)
		b = n;
	concat = malloc(sizeof(char) * (a + b + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	a = b = 0;
	for (c = 0; c < a; c++)
		concat[c] = s1[c];
	for (c = 0; c < b; c++)
		concat[c] = s2[c];

	concat[a + b] = '\0';
	return (concat);
}
