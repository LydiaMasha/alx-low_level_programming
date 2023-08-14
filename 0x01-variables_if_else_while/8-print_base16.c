#include <stdio.h>
/**
 * main - Printing all numbers in base 16 lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int d;

	c = 'a';
	d = 0;
	while
		(d < 10) {
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}

