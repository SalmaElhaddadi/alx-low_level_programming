#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function concatenates two strings.
 *
 * @s1: string.
 * @s2: string.
 * @n: number of letters used
 *
 * Return: The returned pointer shall point to new memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i = 0, j = 0, ln1 = 0, ln2 = 0, ln;

	while (s1 && s1[ln1])
		ln1++;
	while (s2 && s2[ln2])
		ln2++;

	if (n >= ln2)
	{
		ln = ln1 + ln2 + 1;
	}
	else
	{
		ln = ln1 + n + 1;
	}
	a = malloc(sizeof(char) * ln);
	if (a == NULL)
		return (NULL);

	while (i < ln1)
	{
		a[i] = s1[i];
		i++;
	}

	while (n < ln2 && i < (ln1 + n))
		a[i++] = s2[j++];

	while (n >= ln2 && i < (ln1 + ln2))
		a[i++] = s2[j++];

	a[i] = '\0';

	return (a);
}
