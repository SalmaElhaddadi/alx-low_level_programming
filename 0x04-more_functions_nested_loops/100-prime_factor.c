#include <math.h>
#include <stdio.h>

/**
 * main - finds largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int n;
	unsigned long int i;
	unsigned long int NUM;

	n = 612852475143;
	NUM = -1;

	while (n % 2 == 0)
	{
		NUM = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while ((n % i) == 0)
		{
			NUM = i;
			n = n / i;
		}
	}

	if (n >= 3)
		NUM = n;

	printf("%ld\n", NUM);

	return (0);
}
