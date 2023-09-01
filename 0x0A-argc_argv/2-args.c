#include <stdio.h>
/**
 * main - a program prints all arguments it receives.
 * @argc: number of command-line arguments.
 * @argv: array of strings holds
 * the arguments values.
 *
 * Return: always (0).
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);

		i++;
	}

	return (0);
}
