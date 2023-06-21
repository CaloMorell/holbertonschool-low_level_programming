#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int num;
	char alp;

	for (num = 0; num < 10; num++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
		_putchar(alp);
		}
		
		_putchar('\n');
	}

}

