#include "main.h"
#include <stdio.h>
/**
 * _strncat - function concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes will be used from src.
 * Return: Returns a pointer to string dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int d_len = 0;
	int s_len = 0;

	while ((*(dest + d_len) != '\0'))
	{
		d_len++;
	}

	while (s_len < n)
	{
		if (*(src + s_len) == '\0')
			break;
		*(dest + d_len + s_len) = *(src + s_len);
		s_len++;
	}
	*(dest + d_len + n) = '\0';

	return (dest);
}
