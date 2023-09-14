#include "variadic_functions.h"

/**
 * print_strings - function prints strings, followed by a new line.
 * @n: the number of integers passed to the function.
 * @separator:  the string to be printed between the strings
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;
	char *str;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(list, char *);

		if (!str)
			str = "(nil)";

		printf("%s", str);

		if ((x != (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}

	printf("\n");

	va_end(list);
}
