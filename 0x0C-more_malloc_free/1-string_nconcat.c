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
	unsigned int len_s1 = 0, len_s2 = 0, i, j;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	if (n >= len_s2)
		n = len_s2;

	concatenated = malloc(sizeof(char) * (len_s1 + n + 1));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < n; j++)
		concatenated[i + j] = s2[j];
	concatenated[i + j] = '\0';

	return (concatenated);
}
