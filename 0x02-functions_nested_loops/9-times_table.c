#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int x_1 = 0, x_2 = 0, z;

	for (x_1 = 0; x_1 <= 9; x_1++)
	{
		for (x_2 = 0; x_2 <= 9; x_2++)
		{
			z = x_1 * x_2;

			if (z >= 10)
			{
				_putchar(((z / 10) % 10) + '0');
			}
			_putchar((z % 10) + '0');

			if (x_2 != 9)
			{
				_putchar(',');
				_putchar(' ');

				if ((x_1 * (x_2 + 1)) < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}


}
