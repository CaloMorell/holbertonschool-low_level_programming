#include "main.h"
#include <stdio.h>

/**
 * _memset - Write a function that fills memory with a constant byte.
 * @s: the memory area pointed to by s.
 * @b: the constant byte b.
 * @n: the first n bytes.
 *
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return s;
}
