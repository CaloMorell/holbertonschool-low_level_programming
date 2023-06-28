#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half of a string.
 * @str: This is the input string.
 */

void puts_half(char *str)
{
	int i;
	int length = strlen(str);
	int strat_index = (length - 1) / 2;

	for (i = strat_index; i < length; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
