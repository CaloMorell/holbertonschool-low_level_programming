#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The string to capitalize.
 *
 * Return: The capitalized string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	while (str[i] != '\0')
	{

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			capitalize_next = 1;
		}
		else
		{

			if (capitalize_next && islower(str[i]))
			{
				str[i] = toupper(str[i]);
				capitalize_next = 0;
			}
			else
			{
				capitalize_next = 0;
			}
		}

		i++;
	}

	return (str);
}
