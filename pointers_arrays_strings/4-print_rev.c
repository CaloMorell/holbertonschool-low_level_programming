#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string, in reverse.
 * @s: string reverse.
 */

void print_rev(char *s)

{
	int i;

	for (i = 0; s[i] >= i; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
