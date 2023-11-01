#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: count of arguments
 * @argv: argument vector
 *
 * Return: Always 0 (succss)
 */

int main(int argc, char **argv)
{
	int a;

	printf("Name of program is \"%s\".\n", argv[0]);
	for (a = 0; a < argc; a++)
	{
		printf("argv[%d] = %s\n", a, argv[a]);
	}
	return (0);
}
