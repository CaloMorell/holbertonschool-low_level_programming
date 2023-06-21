#include <stdio.h>
#include "main.h"

/**
 * main - Prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 *
 */

void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
	     putcahr(alp);
	}
	
	putchar('\n');

	return (0);
}
