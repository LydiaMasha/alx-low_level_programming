#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = atoi(argv[1]);
	int g = atoi(argv[2]);
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = i * g;
	printf("%d\n", mul);

	return (0);
}
