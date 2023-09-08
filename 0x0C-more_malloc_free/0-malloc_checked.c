#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory using malloc.
 *
 * @b: size of allocated memmory.
 * Return: Returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *pt;

	pt = malloc(b);
	if (pt == NULL)
		exit(98);
	return (pt);
}
