#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: This is the output dest.
 * @src: This is the input source.
 *
 * Return: This return to dest, that concatenates two strings.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dets[i] = scr[j];

		i++;
	}
	return (dest);
}
