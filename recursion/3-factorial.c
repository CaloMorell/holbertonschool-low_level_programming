#include "main.h"
#include <stdio.h>

/**
 * factorial - the factorial of a given number.
 * @n: input number.
 *
 * Return: the factorial of a given number.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
