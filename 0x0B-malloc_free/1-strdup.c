#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * @str: string to be copied.
 *
 * Return: NULL if string = NULL.
 *
 */

char *_strdup(char *str)
{
	unsigned int i, size_ = 0;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + size_) != '\0')
	{
		size_++;
	}

	array = malloc(size_ + 1);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size_; i++)
	{
		if (i == size_)
		{
			*(array + i) = '\0';
			return (array);
		}
		array[i] = str[i];
	}
	return (NULL);
}
