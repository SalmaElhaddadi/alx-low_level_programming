#include "main.h"
#include <stdio.h>

/**
 * print_number - function prints an integer.
 * @n: number to be printed.
 */
void print_number(int n)
{
	unsigned int N = n;

	if (n < 0)
	{
		_putchar('-');
		N = n * -1;
	}
	if (N / 10 != 0)
	{
		print_number(N / 10);
	}
	_putchar((N % 10) + '0');
}
