#include <stdio.h>
/**
 * main - A program that prints size of various types
 * Return: 0 (Success)
 */
int main(void)
{

	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s))\n", sizeof(long long int));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	return (0);
}
