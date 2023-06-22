#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 *
 * @m: The number from which to start printing.
 */

void print_to_98(int m)

{
	int x;

	if (m <= 98)
	{
		for (x = m; x <= 98; x++)
		{
			printf("%d", x);

			if (x != 98)

				printf(", ");
		}
	}
	else
	{
		for (x = m; x >= 98; x--)
		{
			printf("%d", x);
			if (x != 98)
				printf(", ");
		}
	}

	printf("\n");

}
