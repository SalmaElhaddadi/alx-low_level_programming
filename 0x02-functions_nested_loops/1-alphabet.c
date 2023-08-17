#include "main.h"
/**
 * print_alphabet - prints all the lower-case alphabets.
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a += 1;
	}
	_putchar('\n');
}
