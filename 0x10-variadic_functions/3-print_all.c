#include "variadic_functions.h"

/**
 * print_all -  a function that prints anything.
 * @format:  is a list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *str, *del = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", del, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", del, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", del, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", del, str);
					break;
				default:
					x++;
					continue;
			}
			del = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(list);
}
