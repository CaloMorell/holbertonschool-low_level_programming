#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * times_table - Prints the 9 times table, starting with 0.
 */

void times_table(void)

{
	int i, result;

	for (i = 0; i <= 9; i++)
	{
		result = 9 * i;
		printf("9 * %d = %d\n", i, result);
	}

	int main(void)
	{
		times_table();
		
		return 0;
	}

}
