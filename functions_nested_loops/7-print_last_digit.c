#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @m: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */

int print_last_digit(int m)
{
	int last_digit;

	last_digit = m %10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');

	return (last_digit);

}
