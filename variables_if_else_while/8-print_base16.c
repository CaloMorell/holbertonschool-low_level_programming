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
	int num;

	for (num = 0; num < 16; num++)
	{
	    if (num <10)

	    {
		    putchar('0' + num);
	    }

	    else

	    {
		    putchar('a' + (num - 10));
	    }

	}

	putchar('\n');

	return (0);
}
