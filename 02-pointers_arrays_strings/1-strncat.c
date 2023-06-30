#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: This is the output dest.
 * @src: This is the input source.
 * @n: This is n byte for src
 *
 * Return: This is return.
 */

char *_strncat(char *dest, const char *src, int n)
{

	while (dest != '\0')
	{
		dest++;
	}

	while (src != '\0' && n > 0)
	{
		dest = src;
		dest++;
		src++;
		n--;
	}

	dest = '\0';

	return (dest);
}
