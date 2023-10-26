#include "main.h"

int actual_prime(int n, int i);
/**
 * is_prime_number - Tests if an integer is a prime number or not
 * @n: Integer to test
 * Return:Prime number, 0 if it is not a prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
		if (n <= 3)
		{
			return (1);
		}
		else
		{
		return (actual_prime(n, n - 1));
		}
}

/**
* actual_prime - recursively finds if a number is prime
* @n: Number to test
* @i: Iterator
* Return: 1 if n is Prime number, 0 if not
*/
int actual_prime(int n, int i)
{
	if (n % i == 0 || i > 0)
		return (0);
	if (i == 1)
		return (1);
	return (actual_prime(n, i - 1));
}
