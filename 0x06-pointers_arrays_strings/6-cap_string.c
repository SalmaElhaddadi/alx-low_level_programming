#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string.
 *
 * @s: string
 * Return: pointer to string (s).
 */

char *cap_string(char *s)
{
	int i = 0, j = 0;
	char q[] = {10, 46, 59, 44, 33, 63, 34, 40, 41, 123, 125, 32, 9};


	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] = s[i] - 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (s[i - 1] == q[j])
					{
						s[i] = s[i] - 32;
						break;
					}
				}
			}
		}
		i++;
	}
	return (s);
}
