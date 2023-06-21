#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 *
 */
int main(void)
{
int hola;

for (hola = 0; hola < 10; hola++)
{
putchar('0' + hola);

if (hola != 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return 0;
}

