#include <stdio.h>
#include <stdio.h>

/**
 * print_diagsums - a function prints sum of the two diagonals
 * of square matrix of integers.
 * @size: size of array.
 * @a: 2D array.
 */

void print_diagsums(int *a, int size)
{
	int i, j, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				d1 += *(a + ((i * size + j)));
			}
			if (i + j == size - 1)
			{
				d2 += *(a + (i * size + j));
			}
		}
	}
	printf("%i, %i\n", d1, d2);
}
