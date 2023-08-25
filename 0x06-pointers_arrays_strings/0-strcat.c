#include "main.h"
#include <stdio.h>
/**
 * _strcat - function concatenates two strings.
 * @dest: destination.
 * @src: source.
 * Return: Returns a pointer to the resulting string dest.
*/

char *_strcat(char *dest, char *src)
{
	int d_ll = 0;
	int s_ll = 0;

	while ((*(dest + d_ll) != 0))
	{
		d_ll++;
	}

	while (*(src + s_ll) != 0)
	{
		*(dest + d_ll + s_ll) = *(src + s_ll);
		s_ll++;
	}
	*(dest + d_ll + s_ll) = *(src + s_ll);

	return (dest);
}
