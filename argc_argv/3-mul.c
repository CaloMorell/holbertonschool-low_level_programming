#include "main.h"
#include <stdio.h>

/**
 * main - Program that multiplies two numbers.
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int index, multiplication;

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
