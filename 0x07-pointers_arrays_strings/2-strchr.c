#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string.
 * @s: specifies the pointer to the null-terminated string
 * @c: specifies the character to be searched.
 * Return: pointer to the first occurrence of-
 * character c in the string s,
 * or '\0' if character is not found.
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (c == '\0')
		return (s + i);
	return (NULL);
}
