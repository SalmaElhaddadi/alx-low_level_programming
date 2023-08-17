#include "main.h"
/**
 * print_sign - checks sign.
 *
 * @n: argument value.
 *
 * Return: 1 when is positive , -1 when is negative , 0 if n = 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
