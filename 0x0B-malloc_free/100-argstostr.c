#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - a function concatenates all the arguments of program.
 *
 * @ac: number of arguments.
 * @av: arguments array.
 *
 * Return: Returns a pointer to a new string, or NULL if it fails
 * Each argument should be followed by a \n in the new string
 */
char *argstostr(int ac, char **av)
{
	int i, j = 0, x = 0, size_ = 0;
	char *array;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size_++;
		}
	}

	array = malloc(size_ + ac + 1);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			array[x] = av[i][j];
			j++, x++;
		}
		array[x] = '\n';
		x++;
	}
	array[x] = '\0';
	return (array);
	}
