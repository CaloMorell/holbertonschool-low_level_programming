#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: This is the output dest.
 * @src: This is the input source.
 *
 * Return: This return to dest, that concatenates two strings.
 */

char *_strcat(char *dest, const char *src)
{

	while (dest != '\0')
	{
		dest++;
	}

	while (src != '\0')
	{
		dest = src;
		dest++;
		src++;
	}

	dest = '\0';

	return (dest);
}
