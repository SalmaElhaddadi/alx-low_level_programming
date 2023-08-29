#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of
 * a pointer to char.
 * @s: pointer to string.
 * @to: string to set the pointer.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
