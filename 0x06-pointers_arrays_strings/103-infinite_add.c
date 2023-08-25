#include "main.h"
#include <stdio.h>

/**
 * delete_zeros - deletes left zeros of a string.
 * @size: the string size.
 * @r: string.
 * Return: poniter to string r.
 */

char *delete_zeros(int size, char *r)
{
	int i = 0, st_d;

		while (i < size)
	{
		if (r[i] != '0')
		{
			st_d = i;
			break;
		}
		i++;
	}
	for (i = 0; i <= size; i++)
	{
		r[i] = r[i + st_d];
	}
	return (r);
}

/**
 * infinite_add - a function that adds two numbers.
 * @n1: first number.
 * @n2: second number.
 * @size_r: the buffer size.
 * @r: result string.
 * Return: poniter to string if size_r is suitable for the result length.
 * or return 0 if size_r less than the result length.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int la = 0, lb = 0, lc = size_r;
	int m1 = 1, m2 = 1, d_1, d_2, c1 = 0, sum = 0;

	while (n1[la] != '\0')
		la++;
	while (n2[lb] != '\0')
		lb++;
	if (la + 1 >= lc || lb + 1 >= lc)
		return (0);
	r[lc] = '\0';
	lc--;
	la--;
	lb--;
	while (lc >= 0)
	{
		d_1 = ((n1[la] - '0') * m1);
		d_2 = ((n2[lb] - '0') * m2);
		sum = d_1 + d_2 + c1 + '0';
		if (sum > '9')
		{
			sum = sum - 10;
			c1 = 1;
		}
		else
			c1 = 0;
		r[lc] = sum;
		lc--;
		if (la <= 0)
			m1 = 0;
		else
			la--;
		if (lb <= 0)
			m2 = 0;
		else
			lb--;
	}
	return (delete_zeros(size_r, r));
}
