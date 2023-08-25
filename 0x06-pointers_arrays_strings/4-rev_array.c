#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function that reverses array of integers.
 * @a: array
 * @n: the number of elements
*/

void reverse_array(int *a, int n)
{
	int i = 0, x;

	if (n >= 2)
	{
		while (i <= (n / 2))
		{
			x = a[i];
			a[i] = a[n - 1 - i];
			a[n - 1 - i] = x;
			i++;
		}
	}
}
