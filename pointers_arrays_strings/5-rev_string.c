#include "main.h"
#include <stdio.h>

/**
 * rev_string - Function that reverses a string.
 *
 * @s: Reverses a string.
 */

void rev_string(char *s)
{
	int len = 0;
	char *begin, *end, temp;

	while (s[len] != '\0')
	{
		len++;
	}

	begin = s;
	end = s + len - 1;

	while (begin < end)
	{
		temp = *begin;
		*begin = *end;
		*end = temp;

		begin++;
		end--;
	}
}

