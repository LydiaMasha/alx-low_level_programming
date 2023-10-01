#include <stdio.h>
#include "main.h"

/**
 * main- prints the number of argumentspassed to the program
 * @argc: number of arguments
 * @argv: arrayof arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
