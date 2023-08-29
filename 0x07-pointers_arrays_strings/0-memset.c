#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @n: number of bytes of the memory pointed to by s.
 * @b: charachter to filled with.
 * Return: pointer to the memory area s.
 * @s: pointer to s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		*(s + j) = b;
		j++;
	}
	return (s);
}
