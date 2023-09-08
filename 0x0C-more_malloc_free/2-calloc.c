#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function allocates memory for array using malloc.
 *
 * @size: size
 * @nmemb: no. of elements
 *
 * Return: pointer to new memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (!size || !nmemb)
		return (NULL);

	s = malloc(size * nmemb);
	if (!s)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		s[i] = 0;
	return (s);
}
