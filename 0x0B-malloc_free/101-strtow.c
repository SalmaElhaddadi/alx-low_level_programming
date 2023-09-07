#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int wcount(char *str);

/**
 * strtow - a function splits a string into words.
 * @str: string to be splitted.
 *
 * Return: The function returns a pointer to an array of strings (words)
 * Each element of this array should contain a single word, null-terminated
 */

char **strtow(char *str)
{
	int i = 0, j = 0, l = 0, g = 0, y = 0, x, w = 0;
	char **array;

	w = wcount(str);
	if (str == NULL || *str == '\0' || !w)
	{
		return (NULL);
	}

	array = malloc((w + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < w; i++)
	{
		l = 0;
		while (str[j])
		{
			if (str[j] != ' ')
			{
				l++;
			}
			if (str[j] == ' ' && l > 0)
			{
				break;
			}
			j++;
		}
		array[i] = malloc((l * sizeof(char)) + 1);
		if (array[i] == NULL)
		{
			free(array);
			for (g = 0; g <= i; g++)
				free(array[g]);
			return (NULL);
		}

		for (g = y, x = 0; g < j; g++)
		{
			if (str[g] != ' ')
			{
				array[i][x] = str[g];
				x++;
			}
		}
		array[i][x] = '\0';
		y = j;
	}
	array[i] = NULL;
	return (array);
}

/**
 * wcount - counts words.
 * @str: the string.
 *
 * Return: number of words in string.
 */

int wcount(char *str)
{
	int x = 0, w = 0;

	while (str[x])
	{
		if ((str[x] == 32 && x && str[x - 1] != 32) || (!str[x + 1] && str[x] != 32))
			w++;
		x++;
	}
	return (w);
}
