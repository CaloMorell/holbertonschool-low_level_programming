#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: Value
 * @b: value
 */
void swap_int(int *a, int *b)
{
	int num;
	num = *a;
	*a = *b;
	b* = num;
}
