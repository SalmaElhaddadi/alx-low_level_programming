#include "main.h"

/**
 * _pow_recursion - returns value of x to the power of y.
 *
 * @x: an integer number.
 * @y: an integer power.
 *
 * Return: returns the value of x raised to the power of y.
 * If y < 0, return -1.
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	if (y == 1)
	{
		return (x);
	}

	return (x * _pow_recursion(x, y - 1));
}
