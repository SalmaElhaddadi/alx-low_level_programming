#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point of the program
 * Return: should return 0 if success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (!(c == 'q' || c == 'e'))
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
