#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point of the program
 * Return: should return 0 if success
 */
int main(void)
{
	int n;
	int l_dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_dgt = n % 10;

	if (l_dgt == 0)
		printf("Last digit of %d is %d and is 0\n", n, l_dgt);
	else if (l_dgt < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_dgt);
	else
		printf("Last digit of %d is %d and is greater than 5\n", n, l_dgt);
	return (0);
}
