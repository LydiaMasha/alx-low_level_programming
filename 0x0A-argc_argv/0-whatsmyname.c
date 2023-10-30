#include <stdio.h>

/**
 * main - Entry point of program
 * @argc: Number of arguements
 * @argv: Array of arguments
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;

	printf("Name of program: %s\n", argv[0]);
	for (i = 0; i < argc; i++)
	{
		printf("Argument %d: %s\n", i, argv[i]);
	}
	return (0);
}
