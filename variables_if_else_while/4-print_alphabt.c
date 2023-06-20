#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alp;

    for (alp = 'a'; alp <= 'z'; alp++)
    {
        if (alp != 'q' && alp != 'e');
        {
            putchar(alp);
        }
    }

    putchar('\n');

    return 0;
}
