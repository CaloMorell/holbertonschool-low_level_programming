#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings.
 * @dest: This is the output dest.
 * @src: This is the input source.
 * @n: This is n byte for src
 *
 * Return: This is return.
 */

char *_strncat(char *dest, const char *src, int n)
{
	
	int i;
	int j;
	
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
