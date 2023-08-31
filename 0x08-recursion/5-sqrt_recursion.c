#include "main.h"

/**
 * Real_sqrt - return natural square Real_sqrt of an integer.
 *
 * @m: integer number.
 * @n: integer number.
 *
 * Return: returns Real_sqrt squar of number
 *
 */
int Real_sqrt(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	if (m * m < n)
	{
		return (Real_sqrt(n, m + 1));
	}

	return (-1);

}

/**
 * _sqrt_recursion - a function returns
 * the natural square Real_sqrt of a number.
 *
 * @n: int number.
 *
 * Return: returns the natural square Real_sqrt of a number
 * the function should return -1 if it doesn't have a
 * natural square Real_sqrt.
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (Real_sqrt(n, 0));
}
