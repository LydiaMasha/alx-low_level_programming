#include <stdio.h>

/**
 * main - entry point of program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int count = argc - 1;

	while (*argv--)
	printf("%d\n", count);

	return (0);
}
