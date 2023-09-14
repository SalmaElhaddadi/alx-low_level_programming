#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers.
 * @n: the number of integers passed to the function.
 * @separator: the string to be printed between numbers.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list list;
	unsigned int x;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(list, int));
		if ((x != (n - 1)) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(list);
}
