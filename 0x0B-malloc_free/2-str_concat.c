#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * @s2: string 2.
 * @s1: string 1.
 * Return: The returned pointer should point to
 * a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, size_1 = 0, size_2 = 0;
	char *ptr;

	if (s1 != NULL)
	{
		for (size_1 = 0; s1[size_1] != '\0'; size_1++)
		;
	}

	if (s2 != NULL)
	{
		for (size_2 = 0; s2[size_2] != '\0'; size_2++)
		;
	}

	ptr = malloc(size_1 + size_2 + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size_1; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < size_2; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[size_1 + size_2] = '\0';
	return (ptr);
}
