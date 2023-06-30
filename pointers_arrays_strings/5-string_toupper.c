#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Converts all lowercase letters in a string to uppercase.
 * @str: The string to convert.
 *
 * Return: The converted string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}

	return str;
}
