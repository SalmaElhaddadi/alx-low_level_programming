#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function creates an array of integers.
 *
 * @min: minimum.
 * @max: maximum.
 *
 * The array created should contain all the values from min to max
 * Return: pointer to the newly created array
 * If min > max, return NULL
 */

int *array_range(int min, int max)
{
	int i, *arr;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));
	if (!arr)
		return (NULL);

	for (i = 0; i <= max - min; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
