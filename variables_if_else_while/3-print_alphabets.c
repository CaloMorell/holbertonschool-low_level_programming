#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alp = 'a';
	char alphabet = 'A';

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
