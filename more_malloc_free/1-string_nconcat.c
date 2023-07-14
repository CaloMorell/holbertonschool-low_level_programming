#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	unsigned int i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++);

	for (j = 0; s2[j] != '\0'&& j < n; j++);

	ptr = malloc(i + j + 1);
	if (ptr == NULL)
		return (NULL);

	int k, l;

	for (k = 0; k < i; k++)

		ptr[k] = s1[k];

	for (l = 0; l < j; l++)

		ptr[i + l] = s2[l];

	ptr[i + j] = '\0';

	return (ptr);
}
