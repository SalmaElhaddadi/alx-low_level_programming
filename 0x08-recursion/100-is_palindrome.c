#include "main.h"
#include <stdio.h>

/**
 * _str_length - calculates _lengthgth of string.
 *
 * @s: a string.
 *
 * Return: _lengthgth of string.
 *
 */
int _str_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _str_length(s + 1));
}

/**
 * palind_check - returns 1 if a string is a palindrome, 0 if not.
 *
 * @s: string.
 * @str_2: string.
 * @_length: string _lengthgth.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 *
 */

int palind_check(char *s, int _length, char *str_2)
{
	if (_length <= 0)
	{
		return (1);
	}

	if (*s != *(str_2 + _length - 1))
	{
		return (0);
	}

	return (palind_check(s + 1, _length - 1, str_2));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: string.
 *
 * Return: 1 if a palindrome , 0 if not.
 *
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}

	return (palind_check(s, _str_length(s), s));
}
