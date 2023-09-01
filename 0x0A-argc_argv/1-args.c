#include <stdio.h>
#include "main.h"

/**
 * main - print no of arguments passed by the program
 * @argv: array of arguments
 * @argc: Number of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
