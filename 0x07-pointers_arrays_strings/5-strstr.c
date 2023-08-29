#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring.
 * @haystack: string to be searched.
 * @needle: string containing characters to search.
 * Return: a pointer to the beginning of located substring,
 * or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, l;

	while (haystack[i])
	{
		for (j = 0, l = i; needle[j]; j++, l++)
		{
			if (haystack[l] != needle[j])
				break;
		}
		if (!needle[j])
			return (haystack + i);
		i++;
	}
	return (NULL);
}
