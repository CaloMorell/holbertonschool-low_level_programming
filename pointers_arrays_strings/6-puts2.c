#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character.
 *
 * @str: character of a string.
 */

void puts2(char *str)

	{
    int a;

    for (a = 0; s[a] != '\0'; a++)
    {
        if (a % 2 == 0)
        {
            printf("%c", s[a]);
        }
    }
    printf("\n");
}
