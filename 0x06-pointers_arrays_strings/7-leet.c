#include "main.h"
#include <stdio.h>

/**
 * leet - function encodes a string into 1337 code.
 * @s: string converted.
 * Return: pointer to s.
 */
char *leet(char *s)
{
	int i = 0, j;

	char l[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char l2[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (s[i] != 0)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = l2[j];
			}
		}
		i++;
	}
	return (s);
}
