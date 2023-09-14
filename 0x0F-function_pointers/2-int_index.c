#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for integer.
 *
 * @array: an array.
 * @size: size of the array
 *
 * @cmp: function cmp.
 *
 * Return: index of first element for which the cmp function does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
