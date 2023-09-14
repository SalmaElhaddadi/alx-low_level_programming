#include "variadic_functions.h"

/**
 * print_all -  a function that prints anything.
 * @format:  is a list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int x = 0;
	char *str;

	va_start(list, format);

		while (format[x] && format)
		{
			switch (format[x])
			{
			case 's':
				str = va_arg(list, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			default:
				x++;
				continue;
			}
			x++;
			if (format[x])
				printf(", ");
		}
	printf("\n");
	va_end(list);
}
