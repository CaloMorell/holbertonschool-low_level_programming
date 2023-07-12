#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: contains the contents.
 * @s2: contains the contents.
 *
 * Return: contains the contents of s1, followed by the contents of s2.
 */

char *str_concat(char *s1, char *s2)

{
	int i = 0;
	int j = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = malloc(strlen(s1) + strlen(s2) + 1);
	
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	
	for (j = 0; s2[j] != '\0'; j++)
		ptr[i++] = s2[j];
	
	return (ptr);
}
