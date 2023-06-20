#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)

{
	char alf[52] = "abcdefghijklmnopqrstuvwxyz/ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alf[i]);
	}
	putchar('\n');
	return (0);
}
