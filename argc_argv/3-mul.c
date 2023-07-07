#include "main.h"
#include <stdio.h>

/**
 * main - Programa que multiplica dos números.
 * @argc: Cantidad de argumentos
 * @argv: Vector de argumentos
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int index, mult;

	mult = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index = 1; index < argc; index++)
	{
		mult = mult * atoi(argv[index]);
	}
	printf("%d\n", mult);
	return (0);
}
