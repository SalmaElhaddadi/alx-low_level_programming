#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array of chars.
 *
 * @c: intial character.
 * @size: size of the array.
 *
 * Return: a pointer to array.
 *
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)
	{
		if (i == size)
		{
			array[i] = '\0';
			return (array);
		}
		array[i] = c;
	}

	return (NULL);
}
