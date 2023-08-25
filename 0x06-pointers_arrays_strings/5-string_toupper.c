#include "main.h"
#include <stdio.h>
/**
 * string_toupper - a function that changes all lower-case
 * letters to upper-case.
 * @s: string.
 * Return: returns a pointer to string.
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		(s[i] >= 'a' && s[i] <= 'z') ? (s[i] -= 32) : (s[i] += 0);
		i++;
	}
	return (s);
}
