#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum
 * number of coins to make change for an amount of money.
 * @argc: number of command-line arguments.
 * @argv: array of strings holds
 * the arguments values.
 *
 * Return: always (0).
*/

int main(int argc, char *argv[])
{
	int c = 0, x = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x <= 0)
		printf("0\n");
	else
	{
		if (x / 25)
		{
			c += (x / 25);
			x %= 25;
		}
		if (x / 10)
		{
			c += (x / 10);
			x %= 10;
		}
		if (x / 5)
		{
			c += (x / 5);
			x %= 5;
		}
		if (x / 2)
		{
			c += (x / 2);
			x %= 2;
		}
		if (x / 1)
		{
			c += (x / 1);
			x %= (1);
		}
		printf("%i\n", c);
	}
	return (0);
}
