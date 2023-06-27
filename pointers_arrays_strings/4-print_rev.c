#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse.
 * @s: string to be reversed.
 */

void print_rev(char *s)
{

int length = 0;

while (s[length] != '\0')
{
length++;
}

for (i = length - 1; i >= 0; i--)
{
printf("%c", s[i]);
}

printf("\n");
}
