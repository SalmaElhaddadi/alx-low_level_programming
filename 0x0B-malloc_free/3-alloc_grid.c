#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - a function returns a pointer to a two
 * dimensional array of integers.
 *
 * @width: array width.
 * @height: array height.
 *
 * Return: The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 *
 */

int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width < 1 || height < 1)
		return (NULL);

	array = malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			free(array);
			for (j = 0; j <= i; j++)
				free(array[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
