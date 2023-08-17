#include <stdio.h>

/**
 * main - prints first 50 Fibonacci
 * Return: 0 at success
 */

int main(void)
{
	long f_a = 1, f_b = 2, ff, sum;
	int i;

	for (i = 0; ; i++)
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
			if (ff > 4000000)
			{
				break;
			}
		}

		if ((ff % 2) == 0)
		{
			sum += ff;
		}

	}
	printf("%ld\n", sum);
	return (0);
}
