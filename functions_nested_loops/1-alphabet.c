#include "main.h"

/**
 * main - Prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
	     _putchar(alp);
	}

	_putchar('\n');

	return (0);
}
