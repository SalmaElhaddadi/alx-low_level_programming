#include "main.h"
/**
 * _isalpha - checks character is alphabet.
 *
 * @c: ASCII value.
 *
 * Return: (1) if alphabet and (0) if not an alphabet.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
