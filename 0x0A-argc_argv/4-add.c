#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 1; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		sum = i + j;
	}
	printf("%d\n", sum);

	return (0);
}


