#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)

{
	char alf[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alf[i]);
	}
	putchar('\n');
	return (0);
}
