#include "main.h"
#include <stdio.h>

/**
 * _abs - Calculates the absolute value of an integer.
 *
 * @m: The integer to compute the absolute value of.
 *
 * Return: The absolute value of an integer.
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);

}
