#include <stdio.h>

int atoi_(char *s);
int int_check(char s[]);

/**
 * main - a program that adds positive numbers.
 *
 * @argc: number of command-line arguments.
 * @argv: array of strings holds
 * the arguments values.
 *
 * Return: always (0).
*/

int main(int argc, char *argv[])
{
	int i = 1, s = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		while (i < argc)
		{
			if ((!(int_check(argv[i]))))
			{
				printf("Error\n");
				return (1);
			}
			s = s + atoi_(argv[i]);
			i++;
		}
		printf("%i\n", s);
	}
	return (0);
}

/**
 * int_check - a function checks if a string is integer.
 *
 * @s: string to be checked.
 *
 * Return: 1 if numbinteger, or 0.
*/

int int_check(char s[])
{
	int l = 0;

	if (s[l] == '-')
	{
		l++;
	}

	while (s[l] != '\0')
	{
		if (s[l] > 57 || s[l] < 48)
		{
			return (0);
		}

		l++;
	}

	return (1);
}

/**
 * atoi_ - a function that converts a string to int.
 *
 * @s: string to be converted.
 *
 * Return: integer.
*/

int atoi_(char *s)
{
	int l = 0, N = 0, n = 1;

	while (s[l] != '\0')
	{
		if (s[l] == '-')
		{
			n = -1;
			l++;
		}

		N = (N * 10) + (s[l] - '0');
		l++;
	}

	return (n * N);
}
