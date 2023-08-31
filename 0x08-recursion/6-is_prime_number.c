#include "main.h"

/**
 * realPrimeNumber - function checks if a number is prime.
 *
 * @n: integer number.
 * @x: the integer n - 1.
 * Return: returns 1 if n is a prime number,
 * otherwise 0.
 */

int realPrimeNumber(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}

	if (n % x != 0)
	{
		return (realPrimeNumber(n, x - 1));
	}
	return (0);
}


/**
 * is_prime_number -  a function that returns 1
 * if the integer is a prime number.
 *
 * @n: integer.
 *
 * Return: returns 1 if input integer a prime number,
 * otherwise 0.
 *
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (realPrimeNumber(n, n - 1));
}

