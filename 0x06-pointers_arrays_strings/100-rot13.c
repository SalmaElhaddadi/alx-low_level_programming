#include "main.h"
#include <stdio.h>

/**
 * rot13 - function encodes a string using rot13.
 * @s: string.
 * Return: pointer to string s.
 */

char *rot13(char *s)
{
	int i = 0, j;

	char r_1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r_2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	while (s[i] != '\0')
	{
		for (j = 0; r_1[j] != '\0'; j++)
		{
			if (s[i] == r_1[j])
			{
				s[i] = r_2[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
