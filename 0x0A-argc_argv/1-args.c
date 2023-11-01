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
	int num = argc;
	(void)argv;

	printf("%d\n", num - 1);

	return (0);
}
