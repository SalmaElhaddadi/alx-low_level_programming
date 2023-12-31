#include "main.h"
/**
 * _islower - checks if character is lower-case alphabet.
 *
 * @c: ASCII value.
 *
 * Return: (1) if lowercase and (0) if not a lower case.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
