#include "main.h"
#include <stdio.h>

/**
 * _abs - Calculates the absolute value of an integer.
 *
 * @m: The integer to compute the absolute value of.
 *
 * Return: The absolute value of an integer.
 */

int _abs(int m)
{
	if (m < 0)
		return (-m);
	else
		return (m);

}
