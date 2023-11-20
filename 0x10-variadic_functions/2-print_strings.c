#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, separated by a given separator
 * @separator: String to be printed between strings (if not NULL)
 * @n: Number of strings passed to the function
 * @...: Variable number of arguments (integers to be printed)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *current_str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		current_str = va_arg(args, const char *);

		if (current_str != NULL)
			printf("%s", current_str);
		else
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
