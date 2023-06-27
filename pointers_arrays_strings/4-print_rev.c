#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string, in reverse.
 * @s: string to be reverse.
 */

void print_rev(char *s)

{
	int i;

	for (i = strlen(s) - 1; 1 >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
