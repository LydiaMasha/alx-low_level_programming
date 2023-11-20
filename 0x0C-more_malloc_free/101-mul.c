#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - Multiplies two numbers represented as strings
 * @num1: First number
 * @num2: Second number
 *
 * Return: Result of the multiplication as a string
 */
char *multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0;
	int *result;
	int carry, prod, i, j, k;

	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;

	result = malloc(sizeof(int) * (len1 + len2));

	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			prod = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1];
			carry = prod / 10;
			result[i + j + 1] = prod % 10;
		}
		result[i + j + 1] = carry;
	}
	char *result_str;

	result_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result_str == NULL)
	{
		free(result);
		printf("Error\n");
		exit(98);
	}
	k = 0;
	for (i = 0; i < len1 + len2; i++)
	{
		if (i == 0 && result[i] == 0)
			continue;
		result_str[k++] = result[i] + '0';
	}

	result_str[k] = '\0';

	free(result);

	return (result_str);
}
