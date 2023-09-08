#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long int s_to_n(char *s);
int _strlen(char *s);
int is_n(char s[]);

/**
 * main - multiplies two numbers.
 * @argv: arguments vector.
 * @argc: arguments counter.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int *p, len, len2, len3, x, d1 = 0, d2 = 0, c, check = 0;
	char *s = argv[1], *s2 = argv[2];

	if (argc != 3 || (!(is_n(s) && is_n(s2))))
	{
		printf("Error\n");
		exit(98);
	}

	len = _strlen(s);
	len2 = _strlen(s2);

	len3 = len + len2;
	p = malloc(sizeof(int) * len3);
	if (!p)
		return (1);
	for (x = 0; x < len + len2; x++)
		p[x] = 0;
	for (len = len; len > 0; len--)
	{
		d1 = s[len - 1] - 48;
		c = 0;
		for (len2 = _strlen(s2); len2 > 0; len2--)
		{
			d2 = s2[len2 - 1] - 48;
			c += p[len + len2 - 1] + (d1 * d2);
			p[len + len2 - 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			p[len + len2] += c;
	}
	for (x = 0; x < len3; x++)
	{
		if (p[x])
			check = 1;
		if (check)
			_putchar(p[x] + 48);
	}
	if (!check)
		_putchar(48);
	_putchar('\n');
	free(p);
	return (0);
}

/**
 * s_to_n - converts a string to ul int.
 *
 * @s: string to converted to ul int.
 *
 * Return: integer int.
*/

unsigned long int s_to_n(char *s)
{
	int length = 0, sig = 1;
	unsigned long int num = 0;

	while (s[length] != '\0')
	{
		if (s[length] == '-')
		{
			sig = -1;
			length++;
		}

		num = (num * 10) + (s[length] - '0');
		length++;
	}

	return (sig * num);
}

/**
 * is_n - a function that checks if a string is a is_n.
 *
 * @s: string to be checked.
 *
 * Return: 1 if is_n, otherwise 0.
*/

int is_n(char s[])
{
	int length = 0;

	while (s[length] != '\0')
	{
		if (s[length] > 57 || s[length] < 48)
		{
			return (0);
		}

		length++;
	}

	return (1);
}

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: string passed by reference.
 *
 * Return: returns the length of the string.
 *
*/

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
