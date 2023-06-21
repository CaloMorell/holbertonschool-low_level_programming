#include <main.h>

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}

	putchar('\n');

	return (0);
}
