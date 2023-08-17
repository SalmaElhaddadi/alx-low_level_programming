#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0 if success
 */

int main(void)
{
	long f_a = 1, f_b = 2, ff;
	int i;

	for (i = 0; i < 50; i++)
	{
		if (i == 0)
		{
			ff = f_a;
		}
		else if (i == 1)
		{
			ff = f_b;
		}
		else
		{
			ff = f_b + f_a;
			f_a = f_b;
			f_b = ff;
		}

		printf("%ld", ff);

		if (i < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
