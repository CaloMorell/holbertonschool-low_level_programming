#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @args: argument count
 * @argv: argument vector
 *
 * Return: This return to 0
 *
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
