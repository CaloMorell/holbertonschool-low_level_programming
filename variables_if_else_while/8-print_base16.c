#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	int base;

	for (base = 0; base < 16; base++)
	{
	    if (base <10)
	    {
		 putchar('0' + base);
	    }
	    else
	    {
		 putchar('a' + (base - 10));
	    }
	}

	putchar('\n');

	return (0);
}

