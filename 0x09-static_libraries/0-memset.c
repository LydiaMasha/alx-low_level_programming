#include "main.h"
/**
 * *_memset - Filling memory with a constant byte
 * @s: memory to be filled
 * @n: number of times to fill 'b'
 * @b: character to be copied
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
