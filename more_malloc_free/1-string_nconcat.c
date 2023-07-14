#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: point to a newly allocated space in memory, which contains s1.
 * @s2: followed by the first n bytes of s2.
 * @n: the second string to the first string.
 *
 * Return: returned pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, x;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n > strlen(s2))
		n = strlen(s2);

	s3 = malloc(strlen(s1) + n + 1);

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[i] = s1[i];
	}
	for (x = 0; s2[x] != '\0' && x < n; x++; i++)
	{
		s3[i] = s2[x];
	}
	s3[i] = '\0';

	return (s3);
}

