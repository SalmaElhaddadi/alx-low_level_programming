#include "main.h"
#include <stdio.h>

/**
 * linePrnt - prints buffer
 * @b: pointer to the buffer
 * @size: size of the buffer
 * @line: line of buffer to print
 */

void linePrnt(char *b, int line, int size);

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 */

void print_buffer(char *b, int size)
{
	int i, l;

	for (i = 0; i <= (size - 1) / 10 && size != 0; i++)
	{
		printf("%08x: ", i * 10);
		if (i < (size / 10))
		{
			l = 9;
			linePrnt(b, i, l);
		}
		else
		{
			l = (size % 10) - 1;
			linePrnt(b, i, l);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}

/**
 * linePrnt - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 * @line: line of buffer to print
 */

void linePrnt(char *b, int line, int size)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		if (j <= size)
			printf("%02x", b[line * 10 + j]);
		else
		{
			putchar(' ');
			putchar(' ');
		}

		if (j % 2 != 0)
			putchar(' ');
	}
	for (i = 0; i <= size; i++)
	{
		if (b[line * 10 + i] <= 31 || b[line * 10 + i] >= 127)
			putchar('.');
		else
			putchar(b[line * 10 + i]);
	}
}
