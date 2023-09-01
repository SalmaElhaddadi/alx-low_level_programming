#include <stdio.h>

/**
 * atoi_ - converts a string to int num.
 *
 * @s: string to convert to int.
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

/**
 * main - a program that multiplies two numbers.
 * @argc: number of command-line arguments.
 * @argv: array of strings holds
 * the arguments values.
 *
 * Return: always (0).
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{

		printf("%i\n", atoi_(argv[1]) * atoi_(argv[2]));

	}
	return (0);
}
